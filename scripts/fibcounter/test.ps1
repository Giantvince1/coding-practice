$a=1
$b=1
$x=$a+$b
$max=1000
Write-Output 1
Write-Output 1
Write-Output $x
while ($x -lt $max) {
    $a=$b
    $b=$x
    $x=$a+$b
    if ($x -gt $max) {
        Write-Output "Done! Last number in sequence: $b, max number to look up to: $max"
    } else {
        Write-Output $x
    }
}