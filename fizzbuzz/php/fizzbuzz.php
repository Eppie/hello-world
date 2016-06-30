<?php

function fizzbuzz( $n ) {
	for( $i = 1; $i <= $n; $i++ ) {
		$s = "";
		if( $i % 3 == 0 ) {
			$s .= "Fizz";
		}
		if( $i % 5 == 0 ) {
			$s .= "Buzz";
		}
		echo ( $s == "" ? $i : $s ) . "\n";

	}
}

fizzbuzz(100);
?>
