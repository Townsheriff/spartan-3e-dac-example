`timescale 1ns / 1ps

module main_test;

	// Inputs
	reg SYSTEM_CLOCK;
	reg SPI_MISO;

	// Outputs
	wire SPI_MOSI;
	wire SPI_SCK;
	wire DAC_CS;
	wire DAC_CLR;
	wire [7:0] LEDS;
	wire[11:0]WRITE_BITS;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.SYSTEM_CLOCK(SYSTEM_CLOCK), 
		.SPI_MISO(SPI_MISO), 
		.SPI_MOSI(SPI_MOSI), 
		.SPI_SCK(SPI_SCK), 
		.DAC_CS(DAC_CS), 
		.DAC_CLR(DAC_CLR), 
		.LEDS(LEDS),
		.WRITE_BITS(WRITE_BITS)
	);

	initial begin
		// Initialize Inputs
		SYSTEM_CLOCK = 0;
		SPI_MISO = 0;
	end
	
	always #5 SYSTEM_CLOCK = ~SYSTEM_CLOCK;
endmodule

