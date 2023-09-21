#!/bin/bash
echo "configuring close-me on port 8011...";
docker build -t close-me .;
docker run -d -p 1337:1337 cslose-me;