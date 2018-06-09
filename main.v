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

dac_adapter send(
	.CLOCK(SLOW_CLOCK),
	.RESET(RESET_DAC),

	.SPI_SCK(SPI_SCK), 
	.SPI_MISO(SPI_MISO),
	.SPI_MOSI(SPI_MOSI), 

	.DAC_CS(DAC_CS), 
	.DAC_CLR(DAC_CLR),

	.CHECK(LEDS)
);

endmodule
