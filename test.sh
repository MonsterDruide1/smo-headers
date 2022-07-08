# fail on first error
set -e

# test main headers
./generate.sh aarch64 agl al game rs sead
./compile.sh -I. -Iaarch64 -INintendoSDK/include -Isead/include -Iagl/include

# test challenges-base-headers
./generate.sh challenges-base/al challenges-base/game challenges-base/rs
./compile.sh -Ichallenges-base -Ichallenges-base/sead -Iaarch64

# test online-headers
./generate.sh online-headers/al online-headers/game online-headers/rs
./compile.sh -Ionline-headers -Ionline-headers/sead -Iaarch64
