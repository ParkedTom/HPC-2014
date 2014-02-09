#!/bin/bash
mkfifo in2 in1 b1 b2 a1 a2 a3 a4

./merge <(cat b1) <(cat b2) &
./merge <(cat a1) <(cat a2) > b1 &
./merge <(cat a3) <(cat a4) > b2 &
./merge <(cat in1) <(cat in2) > a1 &
./merge <(./signal_generator 500) <(./signal_generator 600) > a2 &
./merge <(./signal_generator 600) <(./signal_generator 1000) > a3 &
./merge <(./signal_generator 1200) <(./signal_generator 1400) > a4 &
tee in1 > in2