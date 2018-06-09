`timescale 1ns / 1ps

module main(
	input SYSTEM_CLOCK,
	input SPI_MISO,
	output SPI_MOSI,
	output SPI_SCK,
	output DAC_CS,
	output DAC_CLR,
	output [7:0]LEDS
);

reg RESET_DAC = 0;
wire SLOW_CLOCK;

seconds_clock counter(
	.SYSTEM_CLOCK(SYSTEM_CLOCK),
	.SECONDS_CLOCK(SLOW_CLOCK)
);

integer STEP = 100;

reg TREND = 0;
reg [11:0]BITS = 0;


dac_adapter send(
	.CLOCK(SLOW_CLOCK),
	.RESET(RESET_DAC),

	.BITS(BITS),
	.SPI_SCK(SPI_SCK), 
	.SPI_MISO(SPI_MISO),
	.SPI_MOSI(SPI_MOSI),

	.DAC_CS(DAC_CS), 
	.DAC_CLR(DAC_CLR),

	.CHECK(LEDS)
);

always @(posedge DAC_CS) begin
	if (TREND == 1) begin
		BITS = BITS + STEP;
	end else begin
		BITS = BITS - STEP;
	end
	
	if (TREND == 1 && BITS > 12'hFFF - STEP) begin
		TREND = 0;
	end else if (TREND == 0 && BITS < STEP) begin
		TREND = 1;
	end
end

endmodule
