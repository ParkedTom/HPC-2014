#!/bin/bash

T1=`mktemp ../tmp/500.XXXX`;
T2=`mktemp ../tmp/600.XXXX`;
T3=`mktemp ../tmp/800.XXXX`;
T4=`mktemp ../tmp/1000.XXXX`;
T5=`mktemp ../tmp/1200.XXXX`;

./fir_filter coeffs/f500.csv > $T1; 
cat $T1 | ./fir_filter coeffs/f600.csv > $T2; 
cat $T2 | ./fir_filter coeffs/f800.csv > $T3; 
cat $T3 | ./fir_filter coeffs/f1000.csv > $T4;
cat $T4 | ./fir_filter coeffs/f1200.csv > $T5;
cat $T5 | ./fir_filter coeffs/f1400.csv;




