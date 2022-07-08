/home/monsterdruide1/OdysseyDecomp/toolchain/clang-3.9.1/bin/clang++ \
    --target=aarch64-linux-elf \
    --sysroot=/home/monsterdruide1/OdysseyDecomp/toolchain/musl \
    -DNON_MATCHING \
    $@ \
    -DVER_100 -DSMOVER=100 -O3 -g   -D SWITCH -D NNSDK -D MATCHING_HACK_NX_CLANG -mcpu=cortex-a57+fp+simd+crypto+crc \
    -mno-implicit-float -stdlib=libc++ -fPIC -fstandalone-debug -fcolor-diagnostics -Wno-unused-command-line-argument \
    -fdebug-prefix-map=/tmp=/home/monsterdruide1/smo-headers/build -fno-rtti -fno-exceptions -Wall -Wextra \
    -Wdeprecated -Wno-unused-parameter -Wno-unused-private-field -fno-strict-aliasing -Wno-invalid-offsetof -std=c++1z -c test.cpp
