#!/bin/bash

curl $1 | ../local/bin/lame --silent --mp3input -t --decode - -
