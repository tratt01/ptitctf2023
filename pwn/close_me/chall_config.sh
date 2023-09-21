#!/bin/bash
echo "configuring close-me on port 1337...";
docker build -t close-me .;
docker run -d -p 1337:1337 close-me;