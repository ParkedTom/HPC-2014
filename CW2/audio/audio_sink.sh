#!/bin/bash

../local/bin/sox  -t raw -e signed-integer -b 16 --endian little -c 2 -r 44100 - -d

