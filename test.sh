# fail on first error
set -e

# test main headers
./generate.sh aarch64 agl al game rs sead
./compile.sh -I. -Iaarch64 -INintendoSDK/include -Isead/include -Iagl/include

# test challenges-base-headers
./generate.sh challenges-base/al challenges-base/game challenges-base/rs
./compile.sh -Ichallenges-base -Ichallenges-base/sead -Iaarch64

# test online-headers
./generate.sh online-headers
./compile.sh -Ionline-headers -Ionline-headers/sead -Iaarch64

# test practice-headers
./generate.sh practice-headers/al practice-headers/game practice-headers/rs
./compile.sh -Ipractice-headers -Ipractice-headers/sead -Iaarch64 -Ipractice-headers/nn

# test odyssey-reversed-headers
./generate.sh odyssey-reversed/al odyssey-reversed/game odyssey-reversed/rs
./compile.sh -Iodyssey-reversed -Iodyssey-reversed/sead -Iaarch64 -Iodyssey-reversed/nn -Iodyssey-reversed/al

# test primitive-renderer-headers
./generate.sh primitive-renderer/al primitive-renderer/game primitive-renderer/rs
./compile.sh -Iprimitive-renderer -Iprimitive-renderer/sead -Iaarch64 -Iprimitive-renderer/nn

# test granimated-headers
./generate.sh granimated-headers/al granimated-headers/game granimated-headers/rs
./compile.sh -Igranimated-headers -Igranimated-headers/sead -Iaarch64 -Igranimated-headers/nn -INintendoSDK/include

# test visible-hitsensors-headers
./generate.sh visible-hitsensors/al visible-hitsensors/game visible-hitsensors/rs
./compile.sh -Ivisible-hitsensors -Ivisible-hitsensors/sead -Iaarch64 -Ivisible-hitsensors/nn -INintendoSDK/include

# test starlight-example-headers
./generate.sh starlight-example/al starlight-example/game starlight-example/rs
./compile.sh -Istarlight-example -Istarlight-example/sead -Iaarch64 -Istarlight-example/nn -INintendoSDK/include

# test starlight-layout-headers
./generate.sh starlight-layout/al starlight-layout/game starlight-layout/rs
./compile.sh -Istarlight-layout -Istarlight-layout/sead -Iaarch64 -Istarlight-layout/nn -INintendoSDK/include

# test galaxy-gravity-headers
./generate.sh galaxy-gravity/al galaxy-gravity/game galaxy-gravity/rs
./compile.sh -Igalaxy-gravity -Igalaxy-gravity/sead -Iaarch64 -Igalaxy-gravity/nn -INintendoSDK/include

# test granimated-superstar-headers
./generate.sh granimated-superstar/al granimated-superstar/game granimated-superstar/rs
./compile.sh -Igranimated-superstar -Igranimated-superstar/sead -Iaarch64 -Igranimated-superstar/nn -INintendoSDK/include
