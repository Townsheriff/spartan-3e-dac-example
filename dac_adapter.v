`timescale 1ns / 1ps
// https://github.com/kalpgarg/phase_shifter
module dac_adapter(
	input CLOCK,
	input RESET,
	input SPI_MISO,
	output SPI_SCK,
    output SPI_MOSI,
    output DAC_CS,
    output DAC_CLR,
	output [7:0]CHECK,
	output [4:0]STATE,
	output [31:0]WRITE_BIT
);

reg INTERNAL_SPI_MOSI = 0;
reg INTERNAL_DAC_CS = 1;
reg INTERNAL_DAC_CLR = 0;
reg INTERNAL_SPI_SCK = 0;
reg [7:0]INTERNAL_CHECK = 8'hFF;

reg [4:0] INTERNAL_STATE = 1;
integer BITS = 32'b10000000001100000000000000000001; 
//integer BITS = 32'b00000000000000000000000000000000; 
integer CURRENT_BIT = 32;

always @(posedge CLOCK) begin
	if (RESET == 1) begin
		INTERNAL_DAC_CS = 1;
		INTERNAL_DAC_CLR = 1;
		INTERNAL_STATE = 1;
	end else begin
		case (INTERNAL_STATE)
		1: begin
			INTERNAL_DAC_CS = 1;
			INTERNAL_DAC_CLR = 0;
			
			INTERNAL_SPI_SCK = 0;
			INTERNAL_SPI_MOSI = 0;
			CURRENT_BIT = 0;
			INTERNAL_STATE = 2;
		end
		2: begin
			// BITS = 0000 0000 0011 0000 0000 0000 0000 0000
			// BITS = 32'b10000000001100000000000000000001;
			CURRENT_BIT = 32;
			INTERNAL_STATE = 3;
		end
		3: begin
			INTERNAL_DAC_CS = 0;
			INTERNAL_SPI_SCK = 0;
			INTERNAL_SPI_MOSI = BITS[CURRENT_BIT - 1];
			CURRENT_BIT = CURRENT_BIT - 1;
			INTERNAL_STATE = 4;
			
			if (CURRENT_BIT < 24 && CURRENT_BIT >= 16) begin
				INTERNAL_CHECK[CURRENT_BIT - 16] = SPI_MISO;
			end
		end
		4: begin			
			if (CURRENT_BIT > 0) begin
				INTERNAL_STATE = 3;
			end else begin
				INTERNAL_STATE = 5;
			end
			
			INTERNAL_SPI_SCK = 1;
		end
		5: begin
			INTERNAL_SPI_SCK = 0;
			INTERNAL_STATE = 6;
		end
		6: begin
			INTERNAL_DAC_CS = 1;
			INTERNAL_SPI_SCK = 1;
			INTERNAL_STATE = 1;
		end
		default: begin
			INTERNAL_DAC_CS = 1;
			INTERNAL_DAC_CLR = 1;
			INTERNAL_SPI_SCK = 0;
			INTERNAL_SPI_MOSI = 0;
			INTERNAL_STATE = 1;
		end
		endcase
	end
end

assign SPI_MOSI = INTERNAL_SPI_MOSI;
assign SPI_SCK = INTERNAL_SPI_SCK;

assign DAC_CS = INTERNAL_DAC_CS;
assign DAC_CLR = INTERNAL_DAC_CLR;

assign CHECK = INTERNAL_CHECK;
assign STATE = INTERNAL_STATE;
assign WRITE_BIT = CURRENT_BIT;
endmodule

