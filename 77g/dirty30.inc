<?php
/*
DIRTY 30 derived from HostExploit.com's CyberDEFCON Report.

These are the top 10 bad Autonomous Systems in 3 categories directly relating to:

These blocks are of the top 10 worst networks in the areas of Infected Hosts, spam,
and attacks. Data is derived with deep respect, and gratefulness from:
http://hostexploit.com
http://robtex.com (for the BGP info)
http://forums.modem-help.co.uk/aggregate.php for the data cleaning (Used elsewhere in this file too!)
igknight for the footwork http://www.igknight-photography.com/ (2013 issue)
chris_c for the footwork (2014 issue)


Note: Some ranges already in the main blocks, so they are not duplicated here.

IT IS ILLEGAL TO USE THIS FILE IN WHOLE OR PART WITH WEBDEFENSE WEB ALARM 
OR ANY XYZER PRODUCT DUE TO VIOLATIONS OF THE GNU/GPL V.2

ZB BLOCK, WHEN YOU CARE ENOUGH TO STEAL THE VERY BEST (thanks DEC!)

COPYRIGHT 2008-2015 GNU/GPL V.2 BY MIKE H.
FOR USE WITH ZB BLOCK OR ANY GNU/GPL V.2 COMPLIANT DERIVATIVE
*/

$zbbversion .= ' / D30-2014-11a'; // Version number goes here. (product code)-(Year)-(Month)(issue letter)

// *php 5 fix
global $whyblockout, $ax;

// **START SIGNATURES**

// *INFECTED WEBSITES*

// Hostinger International
// AS47583
$ax += cidrblock($address,'31.170.160.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-0). ');
$ax += cidrblock($address,'31.220.16.0/22','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-1). ');
$ax += cidrblock($address,'31.220.20.0/24','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-2). ');
$ax += cidrblock($address,'31.220.23.0/24','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-3). ');
$ax += cidrblock($address,'31.220.48.0/20','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-4). ');
$ax += cidrblock($address,'93.188.160.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-5). ');
$ax += cidrblock($address,'185.28.20.0/22','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-6). ');
$ax += cidrblock($address,'208.83.111.0/24','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-7). ');
$ax += cidrblock($address,'212.1.208.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-8). ');


// CloudFlare, Inc.
// AS13335
$ax += cidrblock($address,'103.21.244.0/22','CloudFlare, Inc. (ASN-AS13335-0). ');
$ax += cidrblock($address,'103.22.200.0/22','CloudFlare, Inc. (ASN-AS13335-1). ');
$ax += cidrblock($address,'103.31.4.0/22','CloudFlare, Inc. (ASN-AS13335-2). ');
$ax += cidrblock($address,'104.16.0.0/12','CloudFlare, Inc. (ASN-AS13335-3). ');
$ax += cidrblock($address,'108.162.192.0/18','CloudFlare, Inc. (ASN-AS13335-4). ');
$ax += cidrblock($address,'141.101.64.0/18','CloudFlare, Inc. (ASN-AS13335-5). ');
$ax += cidrblock($address,'162.158.0.0/15','CloudFlare, Inc. (ASN-AS13335-6). ');
$ax += cidrblock($address,'173.245.48.0/20','CloudFlare, Inc. (ASN-AS13335-7). ');
$ax += cidrblock($address,'188.114.96.0/20','CloudFlare, Inc. (ASN-AS13335-8). ');
$ax += cidrblock($address,'190.93.240.0/20','CloudFlare, Inc. (ASN-AS13335-9). ');
$ax += cidrblock($address,'197.234.240.0/22','CloudFlare, Inc. (ASN-AS13335-10). ');
$ax += cidrblock($address,'198.41.128.0/17','CloudFlare, Inc. (ASN-AS13335-11). ');
$ax += cidrblock($address,'199.27.128.0/21','CloudFlare, Inc. (ASN-AS13335-12). ');
$ax += cidrblock($address,'203.161.188.0/24','CloudFlare, Inc. (ASN-AS13335-13). ');
$ax += cidrblock($address,'204.93.177.0/24','CloudFlare, Inc. (ASN-AS13335-14). ');
$ax += cidrblock($address,'204.93.240.0/24','CloudFlare, Inc. (ASN-AS13335-15). ');


// New Dream Network, LLC
// AS26347
$ax += cidrblock($address,'64.90.32.0/19','New Dream Network LLC (ASN-AS26347-0). ');
$ax += cidrblock($address,'64.111.96.0/19','New Dream Network LLC (ASN-AS26347-1). ');
$ax += cidrblock($address,'66.33.192.0/19','New Dream Network LLC (ASN-AS26347-2). ');
$ax += cidrblock($address,'67.205.0.0/18','New Dream Network LLC (ASN-AS26347-3). ');
$ax += cidrblock($address,'69.163.128.0/17','New Dream Network LLC (ASN-AS26347-4). ');
$ax += cidrblock($address,'75.119.192.0/19','New Dream Network LLC (ASN-AS26347-5). ');
$ax += cidrblock($address,'173.236.128.0/17','New Dream Network LLC (ASN-AS26347-6). ');
$ax += cidrblock($address,'205.196.208.0/20','New Dream Network LLC (ASN-AS26347-7). ');
$ax += cidrblock($address,'208.97.128.0/18','New Dream Network LLC (ASN-AS26347-8). ');
$ax += cidrblock($address,'208.113.128.0/17','New Dream Network LLC (ASN-AS26347-9). ');


// Landis Holdings Inc
// AS11042
$ax += cidrblock($address,'69.73.128.0/18','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-0). ');
$ax += cidrblock($address,'209.140.16.0/22','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-1). ');
$ax += cidrblock($address,'209.140.21.0/24','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-2). ');
$ax += cidrblock($address,'209.140.22.0/23','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-3). ');
$ax += cidrblock($address,'209.140.24.0/21','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-4). ');
$ax += cidrblock($address,'209.217.224.0/19','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-5). ');


// Dattatec.com
// AS27823
$ax += cidrblock($address,'179.43.112.0/20','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS27823-0). ');
$ax += cidrblock($address,'200.58.96.0/19','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS27823-1). ');

// home.pl
// AS12824
$ax += cidrblock($address,'46.41.128.0/18','home.pl (ASN-AS12824-0). ');
$ax += cidrblock($address,'46.242.128.0/17','home.pl (ASN-AS12824-1). ');
$ax += cidrblock($address,'62.129.192.0/18','home.pl (ASN-AS12824-2). ');
$ax += cidrblock($address,'79.96.0.0/16','home.pl (ASN-AS12824-3). ');
$ax += cidrblock($address,'89.161.128.0/17','home.pl (ASN-AS12824-4). ');
$ax += cidrblock($address,'188.128.128.0/17','home.pl (ASN-AS12824-5). ');
$ax += cidrblock($address,'212.85.96.0/19','home.pl (ASN-AS12824-6). ');


// HostDime.com, Inc.
// 75a. Update 76f. Dropped from #1 to #3. Graph appears they are trying to clean things up.
// AS33182
$ax += cidrblock($address,'5.226.171.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-0). ');
$ax += cidrblock($address,'5.226.173.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-1). ');
$ax += cidrblock($address,'8.10.120.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-2). ');
$ax += cidrblock($address,'8.19.188.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-3). ');
$ax += cidrblock($address,'8.33.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-4). ');
$ax += cidrblock($address,'23.92.60.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-5). ');
$ax += cidrblock($address,'23.239.129.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-6). ');
$ax += cidrblock($address,'23.239.134.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-7). ');
$ax += cidrblock($address,'23.239.145.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-8). ');
$ax += cidrblock($address,'23.239.159.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-9). ');
$ax += cidrblock($address,'23.249.224.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-10). ');
$ax += cidrblock($address,'37.46.120.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-11). ');
$ax += cidrblock($address,'63.142.244.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-12). ');
$ax += cidrblock($address,'64.37.48.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-13). ');
$ax += cidrblock($address,'64.72.112.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-14). ');
$ax += cidrblock($address,'64.132.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-15). ');
$ax += cidrblock($address,'65.248.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-16). ');
$ax += cidrblock($address,'66.7.192.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-17). ');
$ax += cidrblock($address,'66.193.174.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-18). ');
$ax += cidrblock($address,'66.193.230.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-19). ');
$ax += cidrblock($address,'66.194.40.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-20). ');
$ax += cidrblock($address,'66.194.152.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-21). ');
$ax += cidrblock($address,'66.194.238.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-22). ');
$ax += cidrblock($address,'66.195.16.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-23). ');
$ax += cidrblock($address,'66.195.124.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-24). ');
$ax += cidrblock($address,'66.195.240.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-25). ');
$ax += cidrblock($address,'66.195.252.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-26). ');
$ax += cidrblock($address,'67.23.224.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-27). ');
$ax += cidrblock($address,'69.80.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-28). ');
$ax += cidrblock($address,'72.29.64.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-29). ');
$ax += cidrblock($address,'86.111.176.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-30). ');
$ax += cidrblock($address,'103.13.240.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-31). ');
$ax += cidrblock($address,'104.37.25.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-32). ');
$ax += cidrblock($address,'104.143.92.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-33). ');
$ax += cidrblock($address,'107.161.176.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-34). ');
$ax += cidrblock($address,'107.190.128.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-35). ');
$ax += cidrblock($address,'109.73.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-36). ');
$ax += cidrblock($address,'129.75.0.0/18','HostDime.com Inc, #3 HE Rank (ASN-AS33182-37). ');
$ax += cidrblock($address,'129.75.64.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-38). ');
$ax += cidrblock($address,'129.75.67.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-39). ');
$ax += cidrblock($address,'129.75.72.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-40). ');
$ax += cidrblock($address,'129.75.80.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-41). ');
$ax += cidrblock($address,'129.75.96.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-42). ');
$ax += cidrblock($address,'129.75.120.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-43). ');
$ax += cidrblock($address,'129.75.128.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-44). ');
$ax += cidrblock($address,'129.75.140.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-45). ');
$ax += cidrblock($address,'129.75.152.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-46). ');
$ax += cidrblock($address,'129.75.168.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-47). ');
$ax += cidrblock($address,'129.75.192.0/18','HostDime.com Inc, #3 HE Rank (ASN-AS33182-48). ');
$ax += cidrblock($address,'129.134.32.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-49). ');
$ax += cidrblock($address,'129.134.64.0/18','HostDime.com Inc, #3 HE Rank (ASN-AS33182-50). ');
$ax += cidrblock($address,'129.134.128.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-51). ');
$ax += cidrblock($address,'129.134.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-52). ');
$ax += cidrblock($address,'129.134.208.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-53). ');
$ax += cidrblock($address,'129.134.224.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-54). ');
$ax += cidrblock($address,'138.128.160.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-55). ');
$ax += cidrblock($address,'162.221.184.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-56). ');
$ax += cidrblock($address,'179.48.64.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-57). ');
$ax += cidrblock($address,'179.191.176.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-58). ');
$ax += cidrblock($address,'184.171.240.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-59). ');
$ax += cidrblock($address,'185.7.80.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-60). ');
$ax += cidrblock($address,'185.38.44.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-61). ');
$ax += cidrblock($address,'190.123.196.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-62). ');
$ax += cidrblock($address,'198.49.64.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-63). ');
$ax += cidrblock($address,'198.136.48.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-64). ');
$ax += cidrblock($address,'199.166.30.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-65). ');
$ax += cidrblock($address,'199.168.184.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-66). ');
$ax += cidrblock($address,'200.106.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-67). ');
$ax += cidrblock($address,'201.131.124.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-68). ');
$ax += cidrblock($address,'201.151.147.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-69). ');
$ax += cidrblock($address,'201.163.118.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-70). ');
$ax += cidrblock($address,'208.184.146.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-71). ');
$ax += cidrblock($address,'209.148.83.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-72). ');
$ax += cidrblock($address,'209.148.85.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-73). ');
$ax += cidrblock($address,'209.148.90.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-74). ');
$ax += cidrblock($address,'212.18.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-75). ');


// Vautron Rechenzentrum AG
// AS25504
$ax += cidrblock($address,'46.151.160.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-0). ');
$ax += cidrblock($address,'83.243.56.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-1). ');
$ax += cidrblock($address,'89.200.168.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-2). ');
$ax += cidrblock($address,'91.198.21.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-3). ');
$ax += cidrblock($address,'91.223.141.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-4). ');
$ax += cidrblock($address,'91.223.145.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-5). ');
$ax += cidrblock($address,'91.230.83.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-6). ');
$ax += cidrblock($address,'91.247.144.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-7). ');
$ax += cidrblock($address,'94.102.208.0/20','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-8). ');
$ax += cidrblock($address,'109.235.56.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-9). ');
$ax += cidrblock($address,'151.252.48.0/20','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-10). ');
$ax += cidrblock($address,'158.58.144.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-11). ');
$ax += cidrblock($address,'193.109.242.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-12). ');
$ax += cidrblock($address,'193.150.4.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-13). ');
$ax += cidrblock($address,'193.254.184.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-14). ');
$ax += cidrblock($address,'195.191.92.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-15). ');


// Aruba S.p.A.
// AS31034
$ax += cidrblock($address,'5.249.128.0/19','Aruba S.p.A. (ASN-AS31034-0). ');
$ax += cidrblock($address,'31.11.32.0/21','Aruba S.p.A. (ASN-AS31034-1). ');
$ax += cidrblock($address,'46.37.0.0/19','Aruba S.p.A. (ASN-AS31034-2). ');
$ax += cidrblock($address,'62.149.128.0/17','Aruba S.p.A. (ASN-AS31034-3). ');
$ax += cidrblock($address,'66.71.128.0/18','Aruba S.p.A. (ASN-AS31034-4). ');
$ax += cidrblock($address,'77.223.16.0/20','Aruba S.p.A. (ASN-AS31034-5). ');
$ax += cidrblock($address,'80.88.80.0/20','Aruba S.p.A. (ASN-AS31034-6). ');
$ax += cidrblock($address,'85.235.128.0/19','Aruba S.p.A. (ASN-AS31034-7). ');
$ax += cidrblock($address,'93.186.240.0/20','Aruba S.p.A. (ASN-AS31034-8). ');
$ax += cidrblock($address,'95.110.128.0/17','Aruba S.p.A. (ASN-AS31034-9). ');
$ax += cidrblock($address,'109.70.240.0/21','Aruba S.p.A. (ASN-AS31034-10). ');
$ax += cidrblock($address,'134.255.176.0/21','Aruba S.p.A. (ASN-AS31034-11). ');
$ax += cidrblock($address,'185.56.8.0/22','Aruba S.p.A. (ASN-AS31034-12). ');
$ax += cidrblock($address,'185.57.108.0/22','Aruba S.p.A. (ASN-AS31034-13). ');
$ax += cidrblock($address,'185.58.116.0/22','Aruba S.p.A. (ASN-AS31034-14). ');
$ax += cidrblock($address,'185.58.120.0/22','Aruba S.p.A. (ASN-AS31034-15). ');
$ax += cidrblock($address,'185.58.192.0/22','Aruba S.p.A. (ASN-AS31034-16). ');
$ax += cidrblock($address,'185.58.224.0/22','Aruba S.p.A. (ASN-AS31034-17). ');
$ax += cidrblock($address,'185.62.0.0/22','Aruba S.p.A. (ASN-AS31034-18). ');
$ax += cidrblock($address,'193.254.240.0/23','Aruba S.p.A. (ASN-AS31034-19). ');
$ax += cidrblock($address,'194.126.148.0/23','Aruba S.p.A. (ASN-AS31034-20). ');
$ax += cidrblock($address,'195.128.234.0/23','Aruba S.p.A. (ASN-AS31034-21). ');
$ax += cidrblock($address,'195.225.168.0/22','Aruba S.p.A. (ASN-AS31034-22). ');
$ax += cidrblock($address,'195.234.171.0/24','Aruba S.p.A. (ASN-AS31034-23). ');
$ax += cidrblock($address,'195.250.34.0/24','Aruba S.p.A. (ASN-AS31034-24). ');
$ax += cidrblock($address,'209.227.192.0/18','Aruba S.p.A. (ASN-AS31034-25). ');
$ax += cidrblock($address,'217.73.224.0/20','Aruba S.p.A. (ASN-AS31034-26). ');


// SuperHost.pl
// AS41079
$ax += cidrblock($address,'91.199.22.0/24','SuperHost.pl (ASN-AS41079-0). ');
$ax += cidrblock($address,'178.250.40.0/21','SuperHost.pl (ASN-AS41079-1). ');
$ax += cidrblock($address,'193.218.152.0/22','SuperHost.pl (ASN-AS41079-2). ');
$ax += cidrblock($address,'194.169.227.0/24','SuperHost.pl (ASN-AS41079-3). ');
$ax += cidrblock($address,'195.2.254.0/23','SuperHost.pl (ASN-AS41079-4). ');
$ax += cidrblock($address,'195.114.0.0/23','SuperHost.pl (ASN-AS41079-5). ');



// *SPAM HOSTS*

// Telecommunication Infrastructure Company
// AS48159
$ax += cidrblock($address,'2.179.0.0/16','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-0). ');
$ax += cidrblock($address,'2.180.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-1). ');
$ax += cidrblock($address,'2.180.64.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-2). ');
$ax += cidrblock($address,'2.180.112.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-3). ');
$ax += cidrblock($address,'2.180.128.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-4). ');
$ax += cidrblock($address,'2.180.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-5). ');
$ax += cidrblock($address,'2.181.0.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-6). ');
$ax += cidrblock($address,'2.181.64.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-7). ');
$ax += cidrblock($address,'2.181.112.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-8). ');
$ax += cidrblock($address,'2.181.128.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-9). ');
$ax += cidrblock($address,'2.181.200.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-10). ');
$ax += cidrblock($address,'2.181.208.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-11). ');
$ax += cidrblock($address,'2.181.216.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-12). ');
$ax += cidrblock($address,'2.181.220.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-13). ');
$ax += cidrblock($address,'2.181.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-14). ');
$ax += cidrblock($address,'2.181.240.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-15). ');
$ax += cidrblock($address,'2.181.248.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-16). ');
$ax += cidrblock($address,'2.182.0.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-17). ');
$ax += cidrblock($address,'2.182.144.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-18). ');
$ax += cidrblock($address,'2.182.180.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-19). ');
$ax += cidrblock($address,'2.182.202.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-20). ');
$ax += cidrblock($address,'2.182.204.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-21). ');
$ax += cidrblock($address,'2.182.208.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-22). ');
$ax += cidrblock($address,'2.182.212.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-23). ');
$ax += cidrblock($address,'2.182.220.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-24). ');
$ax += cidrblock($address,'2.182.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-25). ');
$ax += cidrblock($address,'2.183.94.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-26). ');
$ax += cidrblock($address,'2.183.96.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-27). ');
$ax += cidrblock($address,'2.183.192.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-28). ');
$ax += cidrblock($address,'2.183.200.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-29). ');
$ax += cidrblock($address,'2.183.204.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-30). ');
$ax += cidrblock($address,'2.183.208.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-31). ');
$ax += cidrblock($address,'2.183.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-32). ');
$ax += cidrblock($address,'2.184.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-33). ');
$ax += cidrblock($address,'2.184.71.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-34). ');
$ax += cidrblock($address,'2.184.74.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-35). ');
$ax += cidrblock($address,'2.184.76.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-36). ');
$ax += cidrblock($address,'2.184.80.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-37). ');
$ax += cidrblock($address,'2.184.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-38). ');
$ax += cidrblock($address,'2.184.128.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-39). ');
$ax += cidrblock($address,'2.184.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-40). ');
$ax += cidrblock($address,'2.184.192.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-41). ');
$ax += cidrblock($address,'2.185.0.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-42). ');
$ax += cidrblock($address,'2.185.18.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-43). ');
$ax += cidrblock($address,'2.185.40.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-44). ');
$ax += cidrblock($address,'2.185.88.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-45). ');
$ax += cidrblock($address,'2.185.128.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-46). ');
$ax += cidrblock($address,'2.185.224.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-47). ');
$ax += cidrblock($address,'2.187.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-48). ');
$ax += cidrblock($address,'2.187.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-49). ');
$ax += cidrblock($address,'2.187.130.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-50). ');
$ax += cidrblock($address,'2.187.136.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-51). ');
$ax += cidrblock($address,'2.187.144.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-52). ');
$ax += cidrblock($address,'2.187.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-53). ');
$ax += cidrblock($address,'2.187.192.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-54). ');
$ax += cidrblock($address,'2.187.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-55). ');
$ax += cidrblock($address,'2.187.240.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-56). ');
$ax += cidrblock($address,'2.187.248.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-57). ');
$ax += cidrblock($address,'2.188.64.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-58). ');
$ax += cidrblock($address,'2.188.80.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-59). ');
$ax += cidrblock($address,'2.189.64.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-60). ');
$ax += cidrblock($address,'5.232.0.0/15','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-61). ');
$ax += cidrblock($address,'5.234.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-62). ');
$ax += cidrblock($address,'5.234.128.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-63). ');
$ax += cidrblock($address,'5.234.192.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-64). ');
$ax += cidrblock($address,'5.234.208.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-65). ');
$ax += cidrblock($address,'5.235.160.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-66). ');
$ax += cidrblock($address,'5.235.176.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-67). ');
$ax += cidrblock($address,'5.235.186.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-68). ');
$ax += cidrblock($address,'5.235.188.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-69). ');
$ax += cidrblock($address,'5.235.192.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-70). ');
$ax += cidrblock($address,'5.236.0.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-71). ');
$ax += cidrblock($address,'5.236.64.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-72). ');
$ax += cidrblock($address,'5.236.156.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-73). ');
$ax += cidrblock($address,'5.236.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-74). ');
$ax += cidrblock($address,'5.236.192.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-75). ');
$ax += cidrblock($address,'5.237.0.0/16','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-76). ');
$ax += cidrblock($address,'5.239.120.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-77). ');
$ax += cidrblock($address,'5.239.124.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-78). ');
$ax += cidrblock($address,'5.239.144.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-79). ');
$ax += cidrblock($address,'5.239.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-80). ');
$ax += cidrblock($address,'5.239.196.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-81). ');
$ax += cidrblock($address,'5.239.200.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-82). ');
$ax += cidrblock($address,'5.239.216.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-83). ');
$ax += cidrblock($address,'5.239.224.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-84). ');
$ax += cidrblock($address,'46.34.164.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-85). ');
$ax += cidrblock($address,'46.34.168.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-86). ');
$ax += cidrblock($address,'46.34.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-87). ');
$ax += cidrblock($address,'46.100.76.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-88). ');
$ax += cidrblock($address,'46.100.164.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-89). ');
$ax += cidrblock($address,'46.100.171.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-90). ');
$ax += cidrblock($address,'46.100.248.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-91). ');
$ax += cidrblock($address,'78.38.0.0/16','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-92). ');
$ax += cidrblock($address,'78.39.30.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-93). ');
$ax += cidrblock($address,'78.39.90.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-94). ');
$ax += cidrblock($address,'78.39.96.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-95). ');
$ax += cidrblock($address,'78.39.120.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-96). ');
$ax += cidrblock($address,'78.39.122.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-97). ');
$ax += cidrblock($address,'78.39.124.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-98). ');
$ax += cidrblock($address,'78.39.126.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-99). ');
$ax += cidrblock($address,'78.39.149.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-100). ');
$ax += cidrblock($address,'78.39.150.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-101). ');
$ax += cidrblock($address,'78.39.240.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-102). ');
$ax += cidrblock($address,'80.191.165.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-103). ');
$ax += cidrblock($address,'80.191.166.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-104). ');
$ax += cidrblock($address,'80.191.168.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-105). ');
$ax += cidrblock($address,'80.191.184.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-106). ');
$ax += cidrblock($address,'80.191.199.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-107). ');
$ax += cidrblock($address,'80.191.212.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-108). ');
$ax += cidrblock($address,'80.191.239.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-109). ');
$ax += cidrblock($address,'85.185.6.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-110). ');
$ax += cidrblock($address,'85.185.8.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-111). ');
$ax += cidrblock($address,'85.185.20.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-112). ');
$ax += cidrblock($address,'85.185.30.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-113). ');
$ax += cidrblock($address,'85.185.80.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-114). ');
$ax += cidrblock($address,'85.185.172.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-115). ');
$ax += cidrblock($address,'85.185.192.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-116). ');
$ax += cidrblock($address,'85.185.218.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-117). ');
$ax += cidrblock($address,'85.185.224.0/26','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-118). ');
$ax += cidrblock($address,'85.185.244.0/26','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-119). ');
$ax += cidrblock($address,'178.251.208.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-120). ');
$ax += cidrblock($address,'185.11.88.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-121). ');
$ax += cidrblock($address,'185.45.188.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-122). ');
$ax += cidrblock($address,'217.219.144.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-123). ');


// IPGLOBE DATACENTER
// AS53225
$ax += cidrblock($address,'177.137.16.0/20','IPGLOBE DATACENTER, spammy network (ASN-AS53225-0). ');
$ax += cidrblock($address,'177.223.200.0/24','IPGLOBE DATACENTER, spammy network (ASN-AS53225-1). ');
$ax += cidrblock($address,'186.251.128.0/20','IPGLOBE DATACENTER, spammy network (ASN-AS53225-2). ');


// Mobin Net Communication
// AS50810
$ax += cidrblock($address,'2.182.160.0/20','Mobin Net Communication, spammy network (ASN-AS50810-0). ');
$ax += cidrblock($address,'2.183.128.0/20','Mobin Net Communication, spammy network (ASN-AS50810-1). ');
$ax += cidrblock($address,'2.183.184.0/21','Mobin Net Communication, spammy network (ASN-AS50810-2). ');
$ax += cidrblock($address,'2.183.202.0/23','Mobin Net Communication, spammy network (ASN-AS50810-3). ');
$ax += cidrblock($address,'2.188.32.0/21','Mobin Net Communication, spammy network (ASN-AS50810-4). ');
$ax += cidrblock($address,'5.52.0.0/16','Mobin Net Communication, spammy network (ASN-AS50810-5). ');
$ax += cidrblock($address,'5.201.128.0/17','Mobin Net Communication, spammy network (ASN-AS50810-6). ');
$ax += cidrblock($address,'31.47.56.0/21','Mobin Net Communication, spammy network (ASN-AS50810-7). ');
$ax += cidrblock($address,'37.98.0.0/17','Mobin Net Communication, spammy network (ASN-AS50810-8). ');
$ax += cidrblock($address,'37.156.16.0/20','Mobin Net Communication, spammy network (ASN-AS50810-9). ');
$ax += cidrblock($address,'62.102.128.0/20','Mobin Net Communication, spammy network (ASN-AS50810-10). ');
$ax += cidrblock($address,'78.109.200.0/22','Mobin Net Communication, spammy network (ASN-AS50810-11). ');
$ax += cidrblock($address,'79.175.136.0/21','Mobin Net Communication, spammy network (ASN-AS50810-12). ');
$ax += cidrblock($address,'80.242.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-13). ');
$ax += cidrblock($address,'85.239.192.0/19','Mobin Net Communication, spammy network (ASN-AS50810-14). ');
$ax += cidrblock($address,'86.107.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-15). ');
$ax += cidrblock($address,'86.107.208.0/20','Mobin Net Communication, spammy network (ASN-AS50810-16). ');
$ax += cidrblock($address,'89.37.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-17). ');
$ax += cidrblock($address,'89.43.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-18). ');
$ax += cidrblock($address,'89.45.48.0/20','Mobin Net Communication, spammy network (ASN-AS50810-19). ');
$ax += cidrblock($address,'91.133.128.0/17','Mobin Net Communication, spammy network (ASN-AS50810-20). ');
$ax += cidrblock($address,'92.114.16.0/20','Mobin Net Communication, spammy network (ASN-AS50810-21). ');
$ax += cidrblock($address,'93.117.176.0/20','Mobin Net Communication, spammy network (ASN-AS50810-22). ');
$ax += cidrblock($address,'93.119.208.0/20','Mobin Net Communication, spammy network (ASN-AS50810-23). ');
$ax += cidrblock($address,'94.101.128.0/21','Mobin Net Communication, spammy network (ASN-AS50810-24). ');
$ax += cidrblock($address,'94.101.136.0/22','Mobin Net Communication, spammy network (ASN-AS50810-25). ');
$ax += cidrblock($address,'94.101.140.0/23','Mobin Net Communication, spammy network (ASN-AS50810-26). ');
$ax += cidrblock($address,'94.101.240.0/20','Mobin Net Communication, spammy network (ASN-AS50810-27). ');
$ax += cidrblock($address,'109.108.160.0/19','Mobin Net Communication, spammy network (ASN-AS50810-28). ');
$ax += cidrblock($address,'109.203.128.0/19','Mobin Net Communication, spammy network (ASN-AS50810-29). ');
$ax += cidrblock($address,'130.255.192.0/18','Mobin Net Communication, spammy network (ASN-AS50810-30). ');
$ax += cidrblock($address,'178.131.0.0/16','Mobin Net Communication, spammy network (ASN-AS50810-31). ');
$ax += cidrblock($address,'185.3.124.0/22','Mobin Net Communication, spammy network (ASN-AS50810-32). ');
$ax += cidrblock($address,'185.22.28.0/22','Mobin Net Communication, spammy network (ASN-AS50810-33). ');
$ax += cidrblock($address,'188.122.96.0/19','Mobin Net Communication, spammy network (ASN-AS50810-34). ');
$ax += cidrblock($address,'188.209.192.0/20','Mobin Net Communication, spammy network (ASN-AS50810-35). ');
$ax += cidrblock($address,'188.210.64.0/20','Mobin Net Communication, spammy network (ASN-AS50810-36). ');
$ax += cidrblock($address,'188.210.192.0/20','Mobin Net Communication, spammy network (ASN-AS50810-37). ');
$ax += cidrblock($address,'188.211.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-38). ');
$ax += cidrblock($address,'188.212.48.0/20','Mobin Net Communication, spammy network (ASN-AS50810-39). ');
$ax += cidrblock($address,'188.212.240.0/21','Mobin Net Communication, spammy network (ASN-AS50810-40). ');
$ax += cidrblock($address,'188.213.64.0/20','Mobin Net Communication, spammy network (ASN-AS50810-41). ');
$ax += cidrblock($address,'188.213.192.0/21','Mobin Net Communication, spammy network (ASN-AS50810-42). ');


// sfip84
// AS57879
$ax += cidrblock($address,'37.143.48.0/20','sfip84, spammy network (ASN-AS57879-0). ');
$ax += cidrblock($address,'185.3.248.0/22','sfip84, spammy network (ASN-AS57879-1). ');


// Three Hutchison
// AS45727
$ax += cidrblock($address,'23.0.166.0/23','Three Hutchison, spammy network (ASN-AS45727-0). ');
$ax += cidrblock($address,'23.3.76.0/22','Three Hutchison, spammy network (ASN-AS45727-1). ');
$ax += cidrblock($address,'23.5.192.0/20','Three Hutchison, spammy network (ASN-AS45727-2). ');
$ax += cidrblock($address,'23.13.0.0/20','Three Hutchison, spammy network (ASN-AS45727-3). ');
$ax += cidrblock($address,'38.87.226.0/23','Three Hutchison, spammy network (ASN-AS45727-4). ');
$ax += cidrblock($address,'103.10.64.0/22','Three Hutchison, spammy network (ASN-AS45727-5). ');
$ax += cidrblock($address,'180.214.232.0/22','Three Hutchison, spammy network (ASN-AS45727-6). ');
$ax += cidrblock($address,'202.67.32.0/20','Three Hutchison, spammy network (ASN-AS45727-7). ');
$ax += cidrblock($address,'223.255.224.0/21','Three Hutchison, spammy network (ASN-AS45727-8). ');


// PT Excelcomindo Pratama
// AS24203
$ax += cidrblock($address,'112.215.0.0/16','PT Excelcomindo Pratama, spammy network (ASN-AS24203-0). ');
$ax += cidrblock($address,'116.68.224.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-1). ');
$ax += cidrblock($address,'117.102.104.0/21','PT Excelcomindo Pratama, spammy network (ASN-AS24203-2). ');
$ax += cidrblock($address,'121.52.0.0/17','PT Excelcomindo Pratama, spammy network (ASN-AS24203-3). ');
$ax += cidrblock($address,'123.255.201.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-4). ');
$ax += cidrblock($address,'124.40.248.0/21','PT Excelcomindo Pratama, spammy network (ASN-AS24203-5). ');
$ax += cidrblock($address,'202.91.12.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-6). ');
$ax += cidrblock($address,'202.152.224.0/19','PT Excelcomindo Pratama, spammy network (ASN-AS24203-7). ');
$ax += cidrblock($address,'202.169.224.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-8). ');
$ax += cidrblock($address,'203.30.254.0/23','PT Excelcomindo Pratama, spammy network (ASN-AS24203-9). ');
$ax += cidrblock($address,'203.89.29.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-10). ');
$ax += cidrblock($address,'213.171.220.101/32','PT Excelcomindo Pratama, spammy network (ASN-AS24203-11). ');


// Hesabgar Pardaz Gharb Co.
// AS48359
$ax += cidrblock($address,'5.145.114.0/23','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-0). ');
$ax += cidrblock($address,'5.145.116.0/23','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-1). ');
$ax += cidrblock($address,'5.145.119.0/24','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-2). ');
$ax += cidrblock($address,'31.7.84.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-3). ');
$ax += cidrblock($address,'95.82.96.0/20','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-4). ');
$ax += cidrblock($address,'185.21.76.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-5). ');
$ax += cidrblock($address,'185.24.252.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-6). ');
$ax += cidrblock($address,'185.47.48.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-7). ');
$ax += cidrblock($address,'212.95.128.0/20','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-8). ');


// TELEBUCARAMANGA S.A.
// AS22368
$ax += cidrblock($address,'181.174.0.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-0). ');
$ax += cidrblock($address,'186.183.128.0/20','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-1). ');
$ax += cidrblock($address,'190.13.0.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-2). ');
$ax += cidrblock($address,'190.96.128.0/17','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-3). ');
$ax += cidrblock($address,'190.124.96.0/19','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-4). ');
$ax += cidrblock($address,'190.184.128.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-5). ');
$ax += cidrblock($address,'200.21.234.0/23','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-6). ');
$ax += cidrblock($address,'200.21.236.0/23','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-7). ');
$ax += cidrblock($address,'200.21.238.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-8). ');
$ax += cidrblock($address,'200.69.127.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-9). ');
$ax += cidrblock($address,'200.93.150.0/23','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-10). ');
$ax += cidrblock($address,'200.119.1.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-11). ');
$ax += cidrblock($address,'201.221.128.0/19','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-12). ');
$ax += cidrblock($address,'201.245.177.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-13). ');
$ax += cidrblock($address,'201.245.178.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-14). ');
$ax += cidrblock($address,'205.160.32.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-15). ');
$ax += cidrblock($address,'205.160.34.0/23','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-16). ');


// PARSONLINE
// AS16322
$ax += cidrblock($address,'46.41.192.0/18','PARSONLINE, spammy network (ASN-AS16322-0). ');
$ax += cidrblock($address,'46.62.128.0/17','PARSONLINE, spammy network (ASN-AS16322-1). ');
$ax += cidrblock($address,'82.99.192.0/18','PARSONLINE, spammy network (ASN-AS16322-2). ');
$ax += cidrblock($address,'86.57.0.0/17','PARSONLINE, spammy network (ASN-AS16322-3). ');
$ax += cidrblock($address,'91.98.0.0/15','PARSONLINE, spammy network (ASN-AS16322-4). ');
$ax += cidrblock($address,'158.58.184.0/23','PARSONLINE, spammy network (ASN-AS16322-5). ');
$ax += cidrblock($address,'158.58.186.0/24','PARSONLINE, spammy network (ASN-AS16322-6). ');
$ax += cidrblock($address,'185.13.228.0/22','PARSONLINE, spammy network (ASN-AS16322-7). ');
$ax += cidrblock($address,'185.44.36.0/24','PARSONLINE, spammy network (ASN-AS16322-8). ');
$ax += cidrblock($address,'185.55.224.0/23','PARSONLINE, spammy network (ASN-AS16322-9). ');
$ax += cidrblock($address,'188.245.0.0/16','PARSONLINE, spammy network (ASN-AS16322-10). ');
$ax += cidrblock($address,'213.217.32.0/19','PARSONLINE, spammy network (ASN-AS16322-11). ');


// OBEC
// AS133042
$ax += cidrblock($address,'202.29.66.0/23','OBEC, spammy network (ASN-AS133042-0). ');
$ax += cidrblock($address,'202.29.172.0/22','OBEC, spammy network (ASN-AS133042-1). ');
$ax += cidrblock($address,'202.29.176.0/22','OBEC, spammy network (ASN-AS133042-2). ');



// *CURRENT EVENTS*

// PE Shattah Zia G.Naman
// AS34023
$ax += cidrblock($address,'193.105.154.0/24','PE Shattah Zia G.Naman, known bad host (ASN-AS34023-0). '); //75a


// Excite Japan Co. LTD.
// AS45682
$ax += cidrblock($address,'180.235.96.0/21','Excite Japan Co. LTD. known bad host, not an access provider ISP (ASN-AS45682-0). '); //75a


// O2 Sp. Z.O.O.
// AS31080
$ax += cidrblock($address,'193.17.41.0/24','O2 Sp. Z.O.O. known bad host (ASN-AS31080-0). '); //75a
$ax += cidrblock($address,'193.222.135.0/24','O2 Sp. Z.O.O. known bad host (ASN-AS31080-1). '); //75a


// City Telecom
// AS48271
$ax += cidrblock($address,'212.2.224.0/19','City Telecom, known bad host (ASN-AS48271-0). '); //75a


// Leaseweb USA
// AS30633
$ax += cidrblock($address,'89.144.17.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-0). ');
$ax += cidrblock($address,'91.242.214.0/23','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-1). ');
$ax += cidrblock($address,'108.59.0.0/20','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-2). ');
$ax += cidrblock($address,'162.210.192.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-3). ');
$ax += cidrblock($address,'162.219.212.0/22','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-4). ');
$ax += cidrblock($address,'185.28.70.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-5). ');
$ax += cidrblock($address,'192.96.200.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-6). ');
$ax += cidrblock($address,'198.7.56.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-7). ');
$ax += cidrblock($address,'199.58.84.0/22','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-8). ');
$ax += cidrblock($address,'199.115.112.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-9). ');
$ax += cidrblock($address,'207.244.64.0/18','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-10). ');
$ax += cidrblock($address,'208.64.45.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-11). ');
$ax += cidrblock($address,'209.58.128.0/18','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-12). ');
$ax += cidrblock($address,'209.192.128.0/17','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-13). ');
$ax += cidrblock($address,'212.7.200.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-14). ');


// FriendFinder Networks
// AS32527
$ax += cidrblock($address,'69.165.98.0/23','FriendFinder Networks, known bad host (ASN-AS32527-0). ');
$ax += cidrblock($address,'69.165.110.0/24','FriendFinder Networks, known bad host (ASN-AS32527-1). ');
$ax += cidrblock($address,'208.88.176.0/22','FriendFinder Networks, known bad host (ASN-AS32527-2). ');


// MediaFire LLC
// AS46179
$ax += cidrblock($address,'38.114.196.0/23','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-0). ');
$ax += cidrblock($address,'38.114.207.0/24','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-1). ');
$ax += cidrblock($address,'38.118.213.0/24','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-2). ');
$ax += cidrblock($address,'199.91.152.0/21','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-3). ');
$ax += cidrblock($address,'205.196.120.0/22','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-4). ');


// H1 LLC
// AS6870
$ax += cidrblock($address,'37.252.0.0/23','H1 LLC, known bad host (ASN-AS6870-0). ');
$ax += cidrblock($address,'80.243.135.0/24','H1 LLC, known bad host (ASN-AS6870-1). ');
$ax += cidrblock($address,'91.105.232.0/21','H1 LLC, known bad host (ASN-AS6870-2). ');
$ax += cidrblock($address,'91.212.106.0/24','H1 LLC, known bad host (ASN-AS6870-3). ');
$ax += cidrblock($address,'91.212.150.0/24','H1 LLC, known bad host (ASN-AS6870-4). ');
$ax += cidrblock($address,'93.170.76.0/24','H1 LLC, known bad host (ASN-AS6870-5). ');
$ax += cidrblock($address,'95.47.161.0/24','H1 LLC, known bad host (ASN-AS6870-6). ');
$ax += cidrblock($address,'146.120.110.0/24','H1 LLC, known bad host (ASN-AS6870-7). ');
$ax += cidrblock($address,'185.4.64.0/22','H1 LLC, known bad host (ASN-AS6870-8). ');
$ax += cidrblock($address,'188.64.168.0/21','H1 LLC, known bad host (ASN-AS6870-9). ');
$ax += cidrblock($address,'194.33.180.0/24','H1 LLC, known bad host (ASN-AS6870-10). ');


// Voxility SRL
// AS39743
$ax += cidrblock($address,'1.2.3.0/24','Voxility SRL, known bad host (ASN-AS39743-0). ');
$ax += cidrblock($address,'5.254.0.0/20','Voxility SRL, known bad host (ASN-AS39743-1). ');
$ax += cidrblock($address,'5.254.64.0/18','Voxility SRL, known bad host (ASN-AS39743-2). ');
$ax += cidrblock($address,'23.36.112.0/20','Voxility SRL, known bad host (ASN-AS39743-3). ');
$ax += cidrblock($address,'31.215.156.0/23','Voxility SRL, known bad host (ASN-AS39743-4). ');
$ax += cidrblock($address,'31.220.14.0/24','Voxility SRL, known bad host (ASN-AS39743-5). ');
$ax += cidrblock($address,'37.156.32.0/23','Voxility SRL, known bad host (ASN-AS39743-6). ');
$ax += cidrblock($address,'37.221.160.0/20','Voxility SRL, known bad host (ASN-AS39743-7). ');
$ax += cidrblock($address,'41.57.124.0/22','Voxility SRL, known bad host (ASN-AS39743-8). ');
$ax += cidrblock($address,'41.66.0.0/21','Voxility SRL, known bad host (ASN-AS39743-9). ');
$ax += cidrblock($address,'41.77.208.0/21','Voxility SRL, known bad host (ASN-AS39743-10). ');
$ax += cidrblock($address,'41.78.24.0/22','Voxility SRL, known bad host (ASN-AS39743-11). ');
$ax += cidrblock($address,'41.78.204.0/22','Voxility SRL, known bad host (ASN-AS39743-12). ');
$ax += cidrblock($address,'41.79.24.0/22','Voxility SRL, known bad host (ASN-AS39743-13). ');
$ax += cidrblock($address,'41.79.128.0/22','Voxility SRL, known bad host (ASN-AS39743-14). ');
$ax += cidrblock($address,'41.79.168.0/22','Voxility SRL, known bad host (ASN-AS39743-15). ');
$ax += cidrblock($address,'41.79.184.0/22','Voxility SRL, known bad host (ASN-AS39743-16). ');
$ax += cidrblock($address,'41.189.58.0/23','Voxility SRL, known bad host (ASN-AS39743-17). ');
$ax += cidrblock($address,'41.207.96.0/19','Voxility SRL, known bad host (ASN-AS39743-18). ');
$ax += cidrblock($address,'41.207.192.0/19','Voxility SRL, known bad host (ASN-AS39743-19). ');
$ax += cidrblock($address,'41.222.236.0/22','Voxility SRL, known bad host (ASN-AS39743-20). ');
$ax += cidrblock($address,'46.8.37.0/24','Voxility SRL, known bad host (ASN-AS39743-21). ');
$ax += cidrblock($address,'49.244.0.0/16','Voxility SRL, known bad host (ASN-AS39743-22). ');
$ax += cidrblock($address,'65.182.0.0/20','Voxility SRL, known bad host (ASN-AS39743-23). ');
$ax += cidrblock($address,'69.192.144.0/20','Voxility SRL, known bad host (ASN-AS39743-24). ');
$ax += cidrblock($address,'72.246.112.0/22','Voxility SRL, known bad host (ASN-AS39743-25). ');
$ax += cidrblock($address,'72.247.58.0/23','Voxility SRL, known bad host (ASN-AS39743-26). ');
$ax += cidrblock($address,'77.81.164.0/23','Voxility SRL, known bad host (ASN-AS39743-27). ');
$ax += cidrblock($address,'78.108.224.0/20','Voxility SRL, known bad host (ASN-AS39743-28). ');
$ax += cidrblock($address,'80.69.208.0/20','Voxility SRL, known bad host (ASN-AS39743-29). ');
$ax += cidrblock($address,'80.97.54.0/24','Voxility SRL, known bad host (ASN-AS39743-30). ');
$ax += cidrblock($address,'82.197.96.0/19','Voxility SRL, known bad host (ASN-AS39743-31). ');
$ax += cidrblock($address,'84.247.1.0/24','Voxility SRL, known bad host (ASN-AS39743-32). ');
$ax += cidrblock($address,'86.107.128.0/20','Voxility SRL, known bad host (ASN-AS39743-33). ');
$ax += cidrblock($address,'89.32.130.0/23','Voxility SRL, known bad host (ASN-AS39743-34). ');
$ax += cidrblock($address,'89.37.59.0/24','Voxility SRL, known bad host (ASN-AS39743-35). ');
$ax += cidrblock($address,'89.40.16.0/22','Voxility SRL, known bad host (ASN-AS39743-36). ');
$ax += cidrblock($address,'89.40.21.0/24','Voxility SRL, known bad host (ASN-AS39743-37). ');
$ax += cidrblock($address,'89.40.104.0/23','Voxility SRL, known bad host (ASN-AS39743-38). ');
$ax += cidrblock($address,'89.40.233.0/24','Voxility SRL, known bad host (ASN-AS39743-39). ');
$ax += cidrblock($address,'89.42.26.0/24','Voxility SRL, known bad host (ASN-AS39743-40). ');
$ax += cidrblock($address,'89.45.14.0/24','Voxility SRL, known bad host (ASN-AS39743-41). ');
$ax += cidrblock($address,'89.45.89.0/24','Voxility SRL, known bad host (ASN-AS39743-42). ');
$ax += cidrblock($address,'91.212.97.0/24','Voxility SRL, known bad host (ASN-AS39743-43). ');
$ax += cidrblock($address,'91.217.232.0/24','Voxility SRL, known bad host (ASN-AS39743-44). ');
$ax += cidrblock($address,'91.229.228.0/24','Voxility SRL, known bad host (ASN-AS39743-45). ');
$ax += cidrblock($address,'91.233.249.0/24','Voxility SRL, known bad host (ASN-AS39743-46). ');
$ax += cidrblock($address,'91.234.22.0/24','Voxility SRL, known bad host (ASN-AS39743-47). ');
$ax += cidrblock($address,'92.55.133.0/24','Voxility SRL, known bad host (ASN-AS39743-48). ');
$ax += cidrblock($address,'92.114.32.0/24','Voxility SRL, known bad host (ASN-AS39743-49). ');
$ax += cidrblock($address,'93.114.40.0/21','Voxility SRL, known bad host (ASN-AS39743-50). ');
$ax += cidrblock($address,'93.115.80.0/20','Voxility SRL, known bad host (ASN-AS39743-51). ');
$ax += cidrblock($address,'93.115.210.0/24','Voxility SRL, known bad host (ASN-AS39743-52). ');
$ax += cidrblock($address,'93.120.36.0/22','Voxility SRL, known bad host (ASN-AS39743-53). ');
$ax += cidrblock($address,'93.176.0.0/18','Voxility SRL, known bad host (ASN-AS39743-54). ');
$ax += cidrblock($address,'101.98.0.0/16','Voxility SRL, known bad host (ASN-AS39743-55). ');
$ax += cidrblock($address,'103.4.72.0/22','Voxility SRL, known bad host (ASN-AS39743-56). ');
$ax += cidrblock($address,'103.31.184.0/22','Voxility SRL, known bad host (ASN-AS39743-57). ');
$ax += cidrblock($address,'103.247.48.0/24','Voxility SRL, known bad host (ASN-AS39743-58). ');
$ax += cidrblock($address,'103.249.70.0/24','Voxility SRL, known bad host (ASN-AS39743-59). ');
$ax += cidrblock($address,'105.235.208.0/22','Voxility SRL, known bad host (ASN-AS39743-60). ');
$ax += cidrblock($address,'109.163.224.0/20','Voxility SRL, known bad host (ASN-AS39743-61). ');
$ax += cidrblock($address,'113.197.68.0/22','Voxility SRL, known bad host (ASN-AS39743-62). ');
$ax += cidrblock($address,'119.224.0.0/17','Voxility SRL, known bad host (ASN-AS39743-63). ');
$ax += cidrblock($address,'119.224.128.0/20','Voxility SRL, known bad host (ASN-AS39743-64). ');
$ax += cidrblock($address,'124.197.0.0/18','Voxility SRL, known bad host (ASN-AS39743-65). ');
$ax += cidrblock($address,'128.0.46.0/23','Voxility SRL, known bad host (ASN-AS39743-66). ');
$ax += cidrblock($address,'177.10.120.0/22','Voxility SRL, known bad host (ASN-AS39743-67). ');
$ax += cidrblock($address,'177.10.248.0/21','Voxility SRL, known bad host (ASN-AS39743-68). ');
$ax += cidrblock($address,'177.11.152.0/21','Voxility SRL, known bad host (ASN-AS39743-69). ');
$ax += cidrblock($address,'177.11.232.0/21','Voxility SRL, known bad host (ASN-AS39743-70). ');
$ax += cidrblock($address,'177.16.0.0/14','Voxility SRL, known bad host (ASN-AS39743-71). ');
$ax += cidrblock($address,'177.20.208.0/20','Voxility SRL, known bad host (ASN-AS39743-72). ');
$ax += cidrblock($address,'177.21.96.0/19','Voxility SRL, known bad host (ASN-AS39743-73). ');
$ax += cidrblock($address,'177.22.128.0/19','Voxility SRL, known bad host (ASN-AS39743-74). ');
$ax += cidrblock($address,'177.23.16.0/22','Voxility SRL, known bad host (ASN-AS39743-75). ');
$ax += cidrblock($address,'177.36.0.0/20','Voxility SRL, known bad host (ASN-AS39743-76). ');
$ax += cidrblock($address,'177.37.112.0/20','Voxility SRL, known bad host (ASN-AS39743-77). ');
$ax += cidrblock($address,'177.38.192.0/22','Voxility SRL, known bad host (ASN-AS39743-78). ');
$ax += cidrblock($address,'177.38.200.0/21','Voxility SRL, known bad host (ASN-AS39743-79). ');
$ax += cidrblock($address,'177.38.240.0/21','Voxility SRL, known bad host (ASN-AS39743-80). ');
$ax += cidrblock($address,'177.39.24.0/22','Voxility SRL, known bad host (ASN-AS39743-81). ');
$ax += cidrblock($address,'177.39.101.0/24','Voxility SRL, known bad host (ASN-AS39743-82). ');
$ax += cidrblock($address,'177.39.168.0/21','Voxility SRL, known bad host (ASN-AS39743-83). ');
$ax += cidrblock($address,'177.39.192.0/22','Voxility SRL, known bad host (ASN-AS39743-84). ');
$ax += cidrblock($address,'177.40.0.0/14','Voxility SRL, known bad host (ASN-AS39743-85). ');
$ax += cidrblock($address,'177.44.176.0/20','Voxility SRL, known bad host (ASN-AS39743-86). ');
$ax += cidrblock($address,'177.52.44.0/22','Voxility SRL, known bad host (ASN-AS39743-87). ');
$ax += cidrblock($address,'177.53.72.0/21','Voxility SRL, known bad host (ASN-AS39743-88). ');
$ax += cidrblock($address,'177.53.112.0/22','Voxility SRL, known bad host (ASN-AS39743-89). ');
$ax += cidrblock($address,'177.55.192.0/20','Voxility SRL, known bad host (ASN-AS39743-90). ');
$ax += cidrblock($address,'177.55.240.0/23','Voxility SRL, known bad host (ASN-AS39743-91). ');
$ax += cidrblock($address,'177.55.242.0/24','Voxility SRL, known bad host (ASN-AS39743-92). ');
$ax += cidrblock($address,'177.55.251.0/24','Voxility SRL, known bad host (ASN-AS39743-93). ');
$ax += cidrblock($address,'177.55.252.0/22','Voxility SRL, known bad host (ASN-AS39743-94). ');
$ax += cidrblock($address,'177.66.88.0/21','Voxility SRL, known bad host (ASN-AS39743-95). ');
$ax += cidrblock($address,'177.66.120.0/22','Voxility SRL, known bad host (ASN-AS39743-96). ');
$ax += cidrblock($address,'177.66.200.0/22','Voxility SRL, known bad host (ASN-AS39743-97). ');
$ax += cidrblock($address,'177.66.240.0/21','Voxility SRL, known bad host (ASN-AS39743-98). ');
$ax += cidrblock($address,'177.67.128.0/21','Voxility SRL, known bad host (ASN-AS39743-99). ');
$ax += cidrblock($address,'177.70.160.0/20','Voxility SRL, known bad host (ASN-AS39743-100). ');
$ax += cidrblock($address,'177.72.4.0/22','Voxility SRL, known bad host (ASN-AS39743-101). ');
$ax += cidrblock($address,'177.72.184.0/21','Voxility SRL, known bad host (ASN-AS39743-102). ');
$ax += cidrblock($address,'177.75.16.0/21','Voxility SRL, known bad host (ASN-AS39743-103). ');
$ax += cidrblock($address,'177.85.8.0/21','Voxility SRL, known bad host (ASN-AS39743-104). ');
$ax += cidrblock($address,'177.85.48.0/21','Voxility SRL, known bad host (ASN-AS39743-105). ');
$ax += cidrblock($address,'177.85.128.0/21','Voxility SRL, known bad host (ASN-AS39743-106). ');
$ax += cidrblock($address,'177.85.144.0/21','Voxility SRL, known bad host (ASN-AS39743-107). ');
$ax += cidrblock($address,'177.87.208.0/21','Voxility SRL, known bad host (ASN-AS39743-108). ');
$ax += cidrblock($address,'177.96.0.0/14','Voxility SRL, known bad host (ASN-AS39743-109). ');
$ax += cidrblock($address,'177.101.1.0/24','Voxility SRL, known bad host (ASN-AS39743-110). ');
$ax += cidrblock($address,'177.101.4.0/23','Voxility SRL, known bad host (ASN-AS39743-111). ');
$ax += cidrblock($address,'177.101.11.0/24','Voxility SRL, known bad host (ASN-AS39743-112). ');
$ax += cidrblock($address,'177.101.12.0/23','Voxility SRL, known bad host (ASN-AS39743-113). ');
$ax += cidrblock($address,'177.101.15.0/24','Voxility SRL, known bad host (ASN-AS39743-114). ');
$ax += cidrblock($address,'177.101.176.0/20','Voxility SRL, known bad host (ASN-AS39743-115). ');
$ax += cidrblock($address,'177.105.176.0/20','Voxility SRL, known bad host (ASN-AS39743-116). ');
$ax += cidrblock($address,'177.107.176.0/20','Voxility SRL, known bad host (ASN-AS39743-117). ');
$ax += cidrblock($address,'177.124.160.0/22','Voxility SRL, known bad host (ASN-AS39743-118). ');
$ax += cidrblock($address,'177.124.168.0/22','Voxility SRL, known bad host (ASN-AS39743-119). ');
$ax += cidrblock($address,'177.126.80.0/20','Voxility SRL, known bad host (ASN-AS39743-120). ');
$ax += cidrblock($address,'177.126.96.0/20','Voxility SRL, known bad host (ASN-AS39743-121). ');
$ax += cidrblock($address,'177.128.208.0/21','Voxility SRL, known bad host (ASN-AS39743-122). ');
$ax += cidrblock($address,'177.131.160.0/19','Voxility SRL, known bad host (ASN-AS39743-123). ');
$ax += cidrblock($address,'177.132.0.0/14','Voxility SRL, known bad host (ASN-AS39743-124). ');
$ax += cidrblock($address,'177.136.0.0/18','Voxility SRL, known bad host (ASN-AS39743-125). ');
$ax += cidrblock($address,'177.137.168.0/21','Voxility SRL, known bad host (ASN-AS39743-126). ');
$ax += cidrblock($address,'177.154.0.0/20','Voxility SRL, known bad host (ASN-AS39743-127). ');
$ax += cidrblock($address,'177.154.192.0/19','Voxility SRL, known bad host (ASN-AS39743-128). ');
$ax += cidrblock($address,'177.155.176.0/20','Voxility SRL, known bad host (ASN-AS39743-129). ');
$ax += cidrblock($address,'177.156.0.0/14','Voxility SRL, known bad host (ASN-AS39743-130). ');
$ax += cidrblock($address,'177.184.96.0/20','Voxility SRL, known bad host (ASN-AS39743-131). ');
$ax += cidrblock($address,'177.184.128.0/20','Voxility SRL, known bad host (ASN-AS39743-132). ');
$ax += cidrblock($address,'177.185.224.0/20','Voxility SRL, known bad host (ASN-AS39743-133). ');
$ax += cidrblock($address,'177.204.0.0/14','Voxility SRL, known bad host (ASN-AS39743-134). ');
$ax += cidrblock($address,'177.221.32.0/20','Voxility SRL, known bad host (ASN-AS39743-135). ');
$ax += cidrblock($address,'181.114.64.0/19','Voxility SRL, known bad host (ASN-AS39743-136). ');
$ax += cidrblock($address,'181.214.53.0/24','Voxility SRL, known bad host (ASN-AS39743-137). ');
$ax += cidrblock($address,'181.227.0.0/16','Voxility SRL, known bad host (ASN-AS39743-138). ');
$ax += cidrblock($address,'184.27.47.0/24','Voxility SRL, known bad host (ASN-AS39743-139). ');
$ax += cidrblock($address,'184.27.186.0/23','Voxility SRL, known bad host (ASN-AS39743-140). ');
$ax += cidrblock($address,'185.5.172.0/22','Voxility SRL, known bad host (ASN-AS39743-141). ');
$ax += cidrblock($address,'185.8.196.0/22','Voxility SRL, known bad host (ASN-AS39743-142). ');
$ax += cidrblock($address,'185.72.176.0/24','Voxility SRL, known bad host (ASN-AS39743-143). ');
$ax += cidrblock($address,'186.120.0.0/16','Voxility SRL, known bad host (ASN-AS39743-144). ');
$ax += cidrblock($address,'186.149.0.0/16','Voxility SRL, known bad host (ASN-AS39743-145). ');
$ax += cidrblock($address,'186.176.0.0/17','Voxility SRL, known bad host (ASN-AS39743-146). ');
$ax += cidrblock($address,'186.192.64.0/20','Voxility SRL, known bad host (ASN-AS39743-147). ');
$ax += cidrblock($address,'186.193.80.0/20','Voxility SRL, known bad host (ASN-AS39743-148). ');
$ax += cidrblock($address,'186.194.32.0/19','Voxility SRL, known bad host (ASN-AS39743-149). ');
$ax += cidrblock($address,'186.194.80.0/20','Voxility SRL, known bad host (ASN-AS39743-150). ');
$ax += cidrblock($address,'186.194.96.0/20','Voxility SRL, known bad host (ASN-AS39743-151). ');
$ax += cidrblock($address,'186.211.32.0/20','Voxility SRL, known bad host (ASN-AS39743-152). ');
$ax += cidrblock($address,'186.212.0.0/14','Voxility SRL, known bad host (ASN-AS39743-153). ');
$ax += cidrblock($address,'186.219.112.0/21','Voxility SRL, known bad host (ASN-AS39743-154). ');
$ax += cidrblock($address,'186.225.32.0/19','Voxility SRL, known bad host (ASN-AS39743-155). ');
$ax += cidrblock($address,'186.225.80.0/20','Voxility SRL, known bad host (ASN-AS39743-156). ');
$ax += cidrblock($address,'186.227.64.0/20','Voxility SRL, known bad host (ASN-AS39743-157). ');
$ax += cidrblock($address,'186.232.0.0/22','Voxility SRL, known bad host (ASN-AS39743-158). ');
$ax += cidrblock($address,'186.235.128.0/19','Voxility SRL, known bad host (ASN-AS39743-159). ');
$ax += cidrblock($address,'186.235.240.0/21','Voxility SRL, known bad host (ASN-AS39743-160). ');
$ax += cidrblock($address,'186.237.48.0/21','Voxility SRL, known bad host (ASN-AS39743-161). ');
$ax += cidrblock($address,'186.250.0.0/21','Voxility SRL, known bad host (ASN-AS39743-162). ');
$ax += cidrblock($address,'187.1.96.0/20','Voxility SRL, known bad host (ASN-AS39743-163). ');
$ax += cidrblock($address,'187.17.53.0/24','Voxility SRL, known bad host (ASN-AS39743-164). ');
$ax += cidrblock($address,'187.49.32.0/20','Voxility SRL, known bad host (ASN-AS39743-165). ');
$ax += cidrblock($address,'187.58.0.0/15','Voxility SRL, known bad host (ASN-AS39743-166). ');
$ax += cidrblock($address,'187.60.32.0/20','Voxility SRL, known bad host (ASN-AS39743-167). ');
$ax += cidrblock($address,'187.63.64.0/20','Voxility SRL, known bad host (ASN-AS39743-168). ');
$ax += cidrblock($address,'187.73.48.0/20','Voxility SRL, known bad host (ASN-AS39743-169). ');
$ax += cidrblock($address,'187.73.64.0/19','Voxility SRL, known bad host (ASN-AS39743-170). ');
$ax += cidrblock($address,'187.85.48.0/21','Voxility SRL, known bad host (ASN-AS39743-171). ');
$ax += cidrblock($address,'187.103.64.0/20','Voxility SRL, known bad host (ASN-AS39743-172). ');
$ax += cidrblock($address,'187.103.208.0/20','Voxility SRL, known bad host (ASN-AS39743-173). ');
$ax += cidrblock($address,'187.110.160.0/20','Voxility SRL, known bad host (ASN-AS39743-174). ');
$ax += cidrblock($address,'187.110.224.0/21','Voxility SRL, known bad host (ASN-AS39743-175). ');
$ax += cidrblock($address,'187.111.80.0/20','Voxility SRL, known bad host (ASN-AS39743-176). ');
$ax += cidrblock($address,'187.111.192.0/20','Voxility SRL, known bad host (ASN-AS39743-177). ');
$ax += cidrblock($address,'187.112.0.0/14','Voxility SRL, known bad host (ASN-AS39743-178). ');
$ax += cidrblock($address,'187.120.49.0/24','Voxility SRL, known bad host (ASN-AS39743-179). ');
$ax += cidrblock($address,'188.211.239.0/24','Voxility SRL, known bad host (ASN-AS39743-180). ');
$ax += cidrblock($address,'188.212.121.0/24','Voxility SRL, known bad host (ASN-AS39743-181). ');
$ax += cidrblock($address,'188.212.152.0/24','Voxility SRL, known bad host (ASN-AS39743-182). ');
$ax += cidrblock($address,'188.213.19.0/24','Voxility SRL, known bad host (ASN-AS39743-183). ');
$ax += cidrblock($address,'188.213.22.0/24','Voxility SRL, known bad host (ASN-AS39743-184). ');
$ax += cidrblock($address,'188.213.212.0/24','Voxility SRL, known bad host (ASN-AS39743-185). ');
$ax += cidrblock($address,'188.213.216.0/24','Voxility SRL, known bad host (ASN-AS39743-186). ');
$ax += cidrblock($address,'188.215.1.0/24','Voxility SRL, known bad host (ASN-AS39743-187). ');
$ax += cidrblock($address,'188.215.36.0/24','Voxility SRL, known bad host (ASN-AS39743-188). ');
$ax += cidrblock($address,'188.240.234.0/24','Voxility SRL, known bad host (ASN-AS39743-189). ');
$ax += cidrblock($address,'189.21.214.0/24','Voxility SRL, known bad host (ASN-AS39743-190). ');
$ax += cidrblock($address,'189.26.0.0/15','Voxility SRL, known bad host (ASN-AS39743-191). ');
$ax += cidrblock($address,'189.45.240.0/20','Voxility SRL, known bad host (ASN-AS39743-192). ');
$ax += cidrblock($address,'189.50.48.0/20','Voxility SRL, known bad host (ASN-AS39743-193). ');
$ax += cidrblock($address,'189.58.0.0/15','Voxility SRL, known bad host (ASN-AS39743-194). ');
$ax += cidrblock($address,'189.84.112.0/20','Voxility SRL, known bad host (ASN-AS39743-195). ');
$ax += cidrblock($address,'189.90.16.0/20','Voxility SRL, known bad host (ASN-AS39743-196). ');
$ax += cidrblock($address,'189.90.224.0/20','Voxility SRL, known bad host (ASN-AS39743-197). ');
$ax += cidrblock($address,'189.114.0.0/15','Voxility SRL, known bad host (ASN-AS39743-198). ');
$ax += cidrblock($address,'189.126.64.0/20','Voxility SRL, known bad host (ASN-AS39743-199). ');
$ax += cidrblock($address,'189.126.128.0/19','Voxility SRL, known bad host (ASN-AS39743-200). ');
$ax += cidrblock($address,'190.0.248.0/21','Voxility SRL, known bad host (ASN-AS39743-201). ');
$ax += cidrblock($address,'190.11.88.0/21','Voxility SRL, known bad host (ASN-AS39743-202). ');
$ax += cidrblock($address,'190.94.32.0/19','Voxility SRL, known bad host (ASN-AS39743-203). ');
$ax += cidrblock($address,'190.94.64.0/18','Voxility SRL, known bad host (ASN-AS39743-204). ');
$ax += cidrblock($address,'190.94.128.0/19','Voxility SRL, known bad host (ASN-AS39743-205). ');
$ax += cidrblock($address,'190.102.48.0/21','Voxility SRL, known bad host (ASN-AS39743-206). ');
$ax += cidrblock($address,'190.104.0.0/19','Voxility SRL, known bad host (ASN-AS39743-207). ');
$ax += cidrblock($address,'190.106.240.0/20','Voxility SRL, known bad host (ASN-AS39743-208). ');
$ax += cidrblock($address,'190.108.72.0/22','Voxility SRL, known bad host (ASN-AS39743-209). ');
$ax += cidrblock($address,'190.108.196.0/22','Voxility SRL, known bad host (ASN-AS39743-210). ');
$ax += cidrblock($address,'190.108.200.0/21','Voxility SRL, known bad host (ASN-AS39743-211). ');
$ax += cidrblock($address,'190.108.208.0/21','Voxility SRL, known bad host (ASN-AS39743-212). ');
$ax += cidrblock($address,'190.113.96.0/19','Voxility SRL, known bad host (ASN-AS39743-213). ');
$ax += cidrblock($address,'190.124.220.0/22','Voxility SRL, known bad host (ASN-AS39743-214). ');
$ax += cidrblock($address,'190.181.0.0/18','Voxility SRL, known bad host (ASN-AS39743-215). ');
$ax += cidrblock($address,'191.101.32.0/24','Voxility SRL, known bad host (ASN-AS39743-216). ');
$ax += cidrblock($address,'192.188.47.0/24','Voxility SRL, known bad host (ASN-AS39743-217). ');
$ax += cidrblock($address,'193.28.228.0/24','Voxility SRL, known bad host (ASN-AS39743-218). ');
$ax += cidrblock($address,'193.105.21.0/24','Voxility SRL, known bad host (ASN-AS39743-219). ');
$ax += cidrblock($address,'193.105.28.0/24','Voxility SRL, known bad host (ASN-AS39743-220). ');
$ax += cidrblock($address,'193.105.213.0/24','Voxility SRL, known bad host (ASN-AS39743-221). ');
$ax += cidrblock($address,'194.71.107.0/24','Voxility SRL, known bad host (ASN-AS39743-222). ');
$ax += cidrblock($address,'195.60.76.0/23','Voxility SRL, known bad host (ASN-AS39743-223). ');
$ax += cidrblock($address,'196.43.96.0/19','Voxility SRL, known bad host (ASN-AS39743-224). ');
$ax += cidrblock($address,'196.201.64.0/19','Voxility SRL, known bad host (ASN-AS39743-225). ');
$ax += cidrblock($address,'197.159.192.0/19','Voxility SRL, known bad host (ASN-AS39743-226). ');
$ax += cidrblock($address,'199.127.196.0/22','Voxility SRL, known bad host (ASN-AS39743-227). ');
$ax += cidrblock($address,'200.12.224.0/20','Voxility SRL, known bad host (ASN-AS39743-228). ');
$ax += cidrblock($address,'200.13.152.0/21','Voxility SRL, known bad host (ASN-AS39743-229). ');
$ax += cidrblock($address,'200.13.160.0/19','Voxility SRL, known bad host (ASN-AS39743-230). ');
$ax += cidrblock($address,'200.58.64.0/21','Voxility SRL, known bad host (ASN-AS39743-231). ');
$ax += cidrblock($address,'200.58.72.0/22','Voxility SRL, known bad host (ASN-AS39743-232). ');
$ax += cidrblock($address,'200.58.84.0/22','Voxility SRL, known bad host (ASN-AS39743-233). ');
$ax += cidrblock($address,'200.58.88.0/21','Voxility SRL, known bad host (ASN-AS39743-234). ');
$ax += cidrblock($address,'200.105.96.0/21','Voxility SRL, known bad host (ASN-AS39743-235). ');
$ax += cidrblock($address,'200.105.160.0/19','Voxility SRL, known bad host (ASN-AS39743-236). ');
$ax += cidrblock($address,'200.106.224.0/20','Voxility SRL, known bad host (ASN-AS39743-237). ');
$ax += cidrblock($address,'200.110.48.0/20','Voxility SRL, known bad host (ASN-AS39743-238). ');
$ax += cidrblock($address,'200.139.64.0/18','Voxility SRL, known bad host (ASN-AS39743-239). ');
$ax += cidrblock($address,'200.146.0.0/17','Voxility SRL, known bad host (ASN-AS39743-240). ');
$ax += cidrblock($address,'200.150.128.0/20','Voxility SRL, known bad host (ASN-AS39743-241). ');
$ax += cidrblock($address,'200.175.0.0/16','Voxility SRL, known bad host (ASN-AS39743-242). ');
$ax += cidrblock($address,'200.194.96.0/20','Voxility SRL, known bad host (ASN-AS39743-243). ');
$ax += cidrblock($address,'200.233.64.0/20','Voxility SRL, known bad host (ASN-AS39743-244). ');
$ax += cidrblock($address,'201.12.3.0/24','Voxility SRL, known bad host (ASN-AS39743-245). ');
$ax += cidrblock($address,'201.12.21.0/24','Voxility SRL, known bad host (ASN-AS39743-246). ');
$ax += cidrblock($address,'201.12.22.0/24','Voxility SRL, known bad host (ASN-AS39743-247). ');
$ax += cidrblock($address,'201.12.117.0/24','Voxility SRL, known bad host (ASN-AS39743-248). ');
$ax += cidrblock($address,'201.20.100.0/22','Voxility SRL, known bad host (ASN-AS39743-249). ');
$ax += cidrblock($address,'201.22.0.0/16','Voxility SRL, known bad host (ASN-AS39743-250). ');
$ax += cidrblock($address,'201.47.0.0/16','Voxility SRL, known bad host (ASN-AS39743-251). ');
$ax += cidrblock($address,'201.49.0.0/18','Voxility SRL, known bad host (ASN-AS39743-252). ');
$ax += cidrblock($address,'201.86.0.0/16','Voxility SRL, known bad host (ASN-AS39743-253). ');
$ax += cidrblock($address,'201.191.0.0/16','Voxility SRL, known bad host (ASN-AS39743-254). ');
$ax += cidrblock($address,'201.196.48.0/20','Voxility SRL, known bad host (ASN-AS39743-255). ');
$ax += cidrblock($address,'201.196.100.0/22','Voxility SRL, known bad host (ASN-AS39743-256). ');
$ax += cidrblock($address,'201.197.64.0/20','Voxility SRL, known bad host (ASN-AS39743-257). ');
$ax += cidrblock($address,'201.198.0.0/18','Voxility SRL, known bad host (ASN-AS39743-258). ');
$ax += cidrblock($address,'201.203.48.0/20','Voxility SRL, known bad host (ASN-AS39743-259). ');
$ax += cidrblock($address,'201.207.232.0/22','Voxility SRL, known bad host (ASN-AS39743-260). ');
$ax += cidrblock($address,'201.237.0.0/16','Voxility SRL, known bad host (ASN-AS39743-261). ');
$ax += cidrblock($address,'202.37.22.0/24','Voxility SRL, known bad host (ASN-AS39743-262). ');
$ax += cidrblock($address,'202.49.34.0/23','Voxility SRL, known bad host (ASN-AS39743-263). ');
$ax += cidrblock($address,'202.50.170.0/24','Voxility SRL, known bad host (ASN-AS39743-264). ');
$ax += cidrblock($address,'202.180.64.0/18','Voxility SRL, known bad host (ASN-AS39743-265). ');
$ax += cidrblock($address,'202.189.160.0/20','Voxility SRL, known bad host (ASN-AS39743-266). ');
$ax += cidrblock($address,'203.100.208.0/20','Voxility SRL, known bad host (ASN-AS39743-267). ');
$ax += cidrblock($address,'203.160.112.0/20','Voxility SRL, known bad host (ASN-AS39743-268). ');
$ax += cidrblock($address,'203.184.0.0/18','Voxility SRL, known bad host (ASN-AS39743-269). ');
$ax += cidrblock($address,'205.241.32.0/21','Voxility SRL, known bad host (ASN-AS39743-270). ');
$ax += cidrblock($address,'209.124.96.0/19','Voxility SRL, known bad host (ASN-AS39743-271). ');
$ax += cidrblock($address,'216.104.192.0/21','Voxility SRL, known bad host (ASN-AS39743-272). ');

// H1 LLC
// AS6870
$ax += cidrblock($address,'80.243.128.0/20','H1 LLC, known bad host (ASN-AS6870-0). '); //75a
$ax += cidrblock($address,'91.105.232.0/21','H1 LLC, known bad host (ASN-AS6870-1). '); //75a
$ax += cidrblock($address,'91.212.150.0/24','H1 LLC, known bad host (ASN-AS6870-2). '); //75a
$ax += cidrblock($address,'93.170.0.0/15','H1 LLC, known bad host (ASN-AS6870-3). '); //75a
$ax += cidrblock($address,'95.46.0.0/15','H1 LLC, known bad host (ASN-AS6870-4). '); //75a
$ax += cidrblock($address,'185.4.64.0/22','H1 LLC, known bad host (ASN-AS6870-5). '); //75a
$ax += cidrblock($address,'188.64.168.0/21','H1 LLC, known bad host (ASN-AS6870-6). '); //75a
$ax += cidrblock($address,'194.33.180.0/24','H1 LLC, known bad host (ASN-AS6870-7). '); //75a

// Dirty30 test

$ax += (inmatch($query,'xdirty30x','Test Trigger to test function D30. '));

?>