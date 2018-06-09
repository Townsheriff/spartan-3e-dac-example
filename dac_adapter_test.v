`timescale 1ns / 1ps

module dac_adapter_test;

	// Input
	reg SPI_MISO;
	reg CLOCK;
	reg RESET;

	// Outputs
	wire SPI_MOSI;
	wire SPI_SCK;
	wire DAC_CS;
	wire DAC_CLR;
	wire [7:0]CHECK;
	wire [4:0]STATE;
	wire [31:0]WRITE_BIT;

	integer COUNTER = 0;

	dac_adapter uut (
		.CLOCK(CLOCK),
		.RESET(RESET),

		.SPI_SCK(SPI_SCK), 
		.SPI_MISO(SPI_MISO),
		.SPI_MOSI(SPI_MOSI),
		
		.DAC_CS(DAC_CS), 
		.DAC_CLR(DAC_CLR),
	
		.CHECK(CHECK),
		.STATE(STATE),
		.WRITE_BIT(WRITE_BIT)
	);

	initial begin
		SPI_MISO = 0;
		RESET = 0;
		CLOCK = 0;
	end
      
	always begin
		#5 CLOCK = ~CLOCK;
		
		if (COUNTER == 11) begin
			SPI_MISO <= !SPI_MISO;
			COUNTER = 0;
		end
		
		COUNTER = COUNTER + 1;
	end
endmodule

