#!/bin/bash
echo "configuring close-me on port 8011...";
docker build -t close-me .;
docker run -d -p 8011:80 cslose-me;