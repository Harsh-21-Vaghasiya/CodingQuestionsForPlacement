<?php 

$arr=[1,2,3,4,5,6,5,4,3,2,5,3,1];
$occ=0;
$max=0;
sort($arr);


foreach ($arr as $val) {
    echo $val;
}


for ($i=0; $i < count($arr)-1; $i++) { 
    if ($arr[$i]==$arr[$i+1]) {
        $occ++;
    }else {
        $max=$occ;
        $occ=0;
    }
}

echo $max;

?>