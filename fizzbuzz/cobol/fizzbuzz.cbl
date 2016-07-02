       IDENTIFICATION DIVISION.
       PROGRAM-ID. fizz-buzz.

       DATA DIVISION.
       WORKING-STORAGE SECTION.

       01 num pic 999.

       PROCEDURE DIVISION.
       PERFORM VARYING NUM FROM 1 BY 1 UNTIL num > 100
           IF FUNCTION MOD (num, 15) = 0 THEN DISPLAY "FizzBuzz"
           ELSE IF FUNCTION MOD (num, 3) = 0 THEN DISPLAY "Fizz"
           ELSE IF FUNCTION MOD (num, 5) = 0 THEN DISPLAY "Buzz"
           ELSE DISPLAY num
       END-PERFORM.
       STOP RUN.
