# fail on first error
set -e

# test main headers
./generate.sh aarch64 agl al game rs sead
./compile.sh -I. -Iaarch64 -INintendoSDK/include -Isead/include -Iagl/include

# test challenges-base-headers
./generate.sh challenges-base
./compile.sh -Ichallenges-base -Ichallenges-base/sead -Iaarch64 -INintendoSDK/include -Iagl/include

# test online-headers
./generate.sh online-headers
./compile.sh -Ionline-headers -Ionline-headers/sead -Iaarch64 -INintendoSDK/include -Iagl/include

# test practice-headers
./generate.sh practice-headers/al practice-headers/game practice-headers/rs
./compile.sh -Ipractice-headers -Ipractice-headers/sead -Iaarch64 -Ipractice-headers/nn -Iagl/include

# test odyssey-reversed-headers
./generate.sh odyssey-reversed/al odyssey-reversed/game odyssey-reversed/rs
./compile.sh -Iodyssey-reversed -Iodyssey-reversed/sead -Iaarch64 -Iodyssey-reversed/nn -Iodyssey-reversed/al -Iagl/include

# test primitive-renderer-headers
./generate.sh primitive-renderer
./compile.sh -Iprimitive-renderer -Iprimitive-renderer/sead -Iaarch64 -INintendoSDK/include -Iagl/include

# test granimated-headers
./generate.sh granimated-headers
./compile.sh -Igranimated-headers -Igranimated-headers/sead -Iaarch64 -Igranimated-headers/nn -INintendoSDK/include -Iagl/include

# test visible-hitsensors-headers
./generate.sh visible-hitsensors/al visible-hitsensors/game visible-hitsensors/rs
./compile.sh -Ivisible-hitsensors -Ivisible-hitsensors/sead -Iaarch64 -Ivisible-hitsensors/nn -INintendoSDK/include -Iagl/include

# test starlight-example-headers
./generate.sh starlight-example
./compile.sh -Istarlight-example -Istarlight-example/sead -Iaarch64 -Istarlight-example/nn -INintendoSDK/include -Iagl/include

# test starlight-layout-headers
./generate.sh starlight-layout
./compile.sh -Istarlight-layout -Istarlight-layout/sead -Iaarch64 -Istarlight-layout/nn -INintendoSDK/include -Iagl/include

# test galaxy-gravity-headers
./generate.sh galaxy-gravity
./compile.sh -Igalaxy-gravity -Igalaxy-gravity/sead -Iaarch64 -Igalaxy-gravity/nn -INintendoSDK/include -Iagl/include

# test granimated-superstar-headers
./generate.sh granimated-superstar
./compile.sh -Igranimated-superstar -Igranimated-superstar/sead -Iaarch64 -Igranimated-superstar/nn -INintendoSDK/include -Iagl/include
