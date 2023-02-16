#!/bin/bash
read -p 'Add Description to ReadMe: ' message
echo  $message >> README.md
echo " " >> README.md
