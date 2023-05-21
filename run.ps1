$source_dir = "."
$build_dir = "build"
$target = $args[0]

if ( ("$target" -eq "") )
{
    Write-Output "ERROR: Need to pass build target"
    return
}

& "./$build_dir/$target/Debug/$target.exe"
