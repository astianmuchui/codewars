<?php
    $text = "yout";
    function getTheMiddleCharacter($text){
        $len = strlen($text);
        if($len%2 == 0){
            #The number is even
            $half = $len/2;
            $start_point = $half-1;
            $end_point = $half;
            echo substr($text,$start_point,$end_point);
        }else{
			#An odd number would bring something with a .5 if divided by 2
            $half = $len/2;
            // echo $half;
            $char_pos = ceil($half);
            $start_point = $char_pos-1;
            $end_point = $len-$char_pos;
            echo substr($text,$start_point,$end_point);
        }
    }
    getTheMiddleCharacter($text);

?>