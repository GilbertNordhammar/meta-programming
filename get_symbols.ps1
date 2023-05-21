$target = $args[0]
$keyword = $args[1]

Get-ChildItem -Path .\$target -Filter *.cpp -Recurse -File -Name | ForEach-Object {
    $cpp_file = $_.replace("src\", "")
    $obj_file = $cpp_file.replace(".cpp", ".obj")

    Write-Output "======= $cpp_file ======="
    dumpbin /symbols build\$target\$target.dir\Debug\$obj_file | findstr /i $keyword
}

