$build_dir = "build"
$target = $args[0]

if ( $target )
{
    cmake --build $build_dir --target $target
}
else
{
    cmake --build $build_dir
}