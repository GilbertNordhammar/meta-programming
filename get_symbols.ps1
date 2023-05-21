$target = $args[0]
$keyword = $args[1]

$keywords = $args[1..($args.Length - 1)]
$searchTerm = ($keywords | ForEach-Object { "/C:$_" }) -join " "
Write-Output $searchTerm

Get-ChildItem -Path .\$target -Filter *.cpp -Recurse -File -Name | ForEach-Object {
    $cpp_file = $_.replace("src\", "")
    $obj_file = $cpp_file.replace(".cpp", ".obj")

    Write-Output "======= $cpp_file ======="
    $command = "dumpbin /symbols build\$target\$target.dir\Debug\$obj_file | findstr /i $searchTerm | findstr /i /v unwind"
    Invoke-Expression $command
    Write-Output ""
}

