#!/usr/bin/env bash
source "$(dirname "${BASH_SOURCE[0]}")/common.sh"

NAME=optional
VERSION=f6249e7fdcb80131c390a083f1621d96023e72e9
ROOT=Optional-$VERSION

download "https://github.com/akrzemi1/Optional/archive/$VERSION.tar.gz"
init
extract_gzip "$ROOT/optional.hpp" "$ROOT/copyright.txt" "$ROOT/LICENSE"
mkdir -p include/experimental
mv optional.hpp include/experimental/optional
file_list include -type f
