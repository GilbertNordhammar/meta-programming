$source_dir = ".."
$build_dir = "build"

# Create the build directory if it doesn't already exist
if (!(Test-Path $build_dir)) {
    New-Item -ItemType Directory -Path $build_dir | Out-Null
}

# Generate the build files with CMake
& cmake -S . -B $build_dir
