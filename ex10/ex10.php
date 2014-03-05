#!/usr/bin/php
<?php

echo 'running C program';
echo 'C program busts somewhere towards 10,000 arguments';
$arg_setup = ' hi testing test';
$args = str_repeat($arg_setup, 10000);
exec("./ex10 ".$args, $output);

print_r($output);

?>
