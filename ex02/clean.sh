#!/bin/bash
find . -type f \( -name '*~' -o -name '#*#' \) -exec rm -v {} +
