HEADER=all_headers.h
echo "#ifndef __ALL_HEADERS__" > $HEADER
echo "#define __ALL_HEADERS__" >> $HEADER
# don't check NintendoSDK, as that contains 4.0.1-only files
#for file in $(find aarch64 agl al game rs sead -name '*.h');
for file in $(find online-headers/al online-headers/game online-headers/rs -name '*.h')
do
    # ignore Wii-specific files
    # ignore ScopeGuard, as that uses <optional> (C++17)
    if [[ $file == *"cafe"* || $file == *"seadScopeGuard.h" ]]; then continue; fi
    echo "#include \"$file\"" >> $HEADER
done
echo "#endif" >> $HEADER
