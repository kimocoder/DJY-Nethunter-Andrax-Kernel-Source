#!/bin/bash
#
# Import or update audio-kernel, camera-kernel and data-kernel.
#

read -p "Please input the CAF tag for kernel: " branch1
read -p "What do you want to do (import (i) or update (u)): " option

git remote add caf/audio-kernel https://source.codeaurora.org/quic/la/platform/vendor/opensource/audio-kernel.git
git remote add caf/camera-kernel https://source.codeaurora.org/quic/la/platform/vendor/opensource/camera-kernel.git
git remote add caf/data-kernel https://source.codeaurora.org/quic/la/platform/vendor/qcom-opensource/data-kernel.git

case $option in
    import | i)
        git fetch caf/audio-kernel $branch1 && git merge --allow-unrelated-histories -s ours --no-commit FETCH_HEAD && git read-tree --prefix=techpack/audio -u FETCH_HEAD && git commit -s --no-edit
        git fetch caf/camera-kernel $branch1 && git merge --allow-unrelated-histories -s ours --no-commit FETCH_HEAD && git read-tree --prefix=techpack/camera -u FETCH_HEAD && git commit -s --no-edit
        git fetch caf/data-kernel $branch1 && git merge --allow-unrelated-histories -s ours --no-commit FETCH_HEAD && git read-tree --prefix=techpack/data -u FETCH_HEAD && git commit -s --no-edit
        echo "Done."
        ;;
    update | u)
        git fetch caf/audio-kernel $branch1 && git merge -X subtree=techpack/audio FETCH_HEAD --no-edit
        git fetch caf/camera-kernel $branch1 && git merge -X subtree=techpack/camera FETCH_HEAD --no-edit
        git fetch caf/data-kernel $branch1 && git merge -X subtree=techpack/data FETCH_HEAD --no-edit
        echo "Done."
        ;;
    *)
        echo "Your choose is error!"
        ;;
esac
