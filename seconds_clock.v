`timescale 1ns / 1ps

module seconds_clock(
    input SYSTEM_CLOCK,
	output SECONDS_CLOCK
);

reg [31:0]CLOCK_COUNTER = 0;
reg INTERNAL_CLOCK = 0;

always @(posedge SYSTEM_CLOCK) begin
	if (CLOCK_COUNTER == 2500000) begin
		CLOCK_COUNTER <= 0;
		INTERNAL_CLOCK <= ~INTERNAL_CLOCK;
	end else begin
		CLOCK_COUNTER <= CLOCK_COUNTER + 1;
	end
end

assign SECONDS_CLOCK = INTERNAL_CLOCK;

endmodule
