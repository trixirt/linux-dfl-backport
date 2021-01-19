#!/bin/sh

module=${module-$1}
module_version=${module_version-$2}
kernelver=${kernelver-$3}
arch=${arch-$4}

dst=/var/lib/dkms/$module/$module_version/$kernelver/$arch/

install -m644 Module.symvers $dst
