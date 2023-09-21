#!/bin/bash
echo "configuring terminator on port 8011...";
docker build -t terminator .;
docker run -d -p 9999:9999 terminator;