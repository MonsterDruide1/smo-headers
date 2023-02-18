SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

cat  << EOF > $SCRIPT_DIR/build/compile_commands.json
[
{
  "directory": "$SCRIPT_DIR/build",
  "command": "clang++ --target=aarch64-linux-elf --sysroot=$SCRIPT_DIR/musl -DNON_MATCHING -I$SCRIPT_DIR/aarch64 -I$SCRIPT_DIR/. -I$SCRIPT_DIR/NintendoSDK/include -I$SCRIPT_DIR/sead/include -I$SCRIPT_DIR/agl/include -DVER_100 -O3 -g   -D SWITCH -D NNSDK -D MATCHING_HACK_NX_CLANG -mcpu=cortex-a57+fp+simd+crypto+crc -mno-implicit-float -stdlib=libc++ -fPIC -fstandalone-debug -fcolor-diagnostics -Wno-unused-command-line-argument -fdebug-prefix-map=/tmp=$SCRIPT_DIR/build -fno-rtti -fno-exceptions -Wall -Wextra -Wdeprecated -Wno-unused-parameter -Wno-unused-private-field -fno-strict-aliasing -Wno-invalid-offsetof -std=c++1z -o test.cpp.obj -c $SCRIPT_DIR/test.cpp",
  "file": "$SCRIPT_DIR/test.cpp"
}
]
EOF
