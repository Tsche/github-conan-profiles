## Conan profiles for Github Actions

This repository contains Conan profiles for various Github Action images. They can be installed using 
```bash
conan config install https://github.com/Tsche/github-conan-profiles.git -sf=${{ matrix.os }}
```
replace matrix.os with whichever folder you want to pull configs from. 

See .github/workflows/ci.yml for a usage example