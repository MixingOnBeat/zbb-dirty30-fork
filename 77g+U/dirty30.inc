<?php
/**
 * DIRTY 30 derived from HostExploit.com's CyberDEFCON Report.
 *
 * These blocks are of the top 10 worst networks in the areas of Infected Hosts, spam, and attacks.
 *
 * Data is derived with deep respect, and gratefulness from:
 * http://hostexploit.com
 * http://robtex.com (for the BGP info).
 * http://etmg.altervista.org/tools/aggregate.php (for the data cleaning).
 *
 * IT IS ILLEGAL TO USE THIS FILE IN WHOLE OR PART WITH WEBDEFENSE WEB ALARM OR ANY XYZER PRODUCT DUE TO VIOLATIONS OF
 * THE GNU/GPL V.2
 *
 * ZB BLOCK, WHEN YOU CARE ENOUGH TO STEAL THE VERY BEST (thanks DEC!)
 *
 * COPYRIGHT 2008-2016 GNU/GPL V.2 BY MIKE H.
 * FOR USE WITH ZB BLOCK OR ANY GNU/GPL V.2 COMPLIANT DERIVATIVE
 *
 * @package Maikuolan/zbb-dirty30-fork
 */

$zbbversion .= ' / D30-2016-01+U'; // Version number goes here. (product code)-(Year)-(Month)(issue letter)(+U = Unofficial fork, non-mainlined release).(Build number)

// *php 5 fix
global $whyblockout, $ax;

// **START SIGNATURES**

// *INFECTED WEBSITES*

// Landis Holdings Inc (updated 2016.01.18)
// AS11042
$ax += cidrblock($address,'69.73.128.0/18','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-0). ');
$ax += cidrblock($address,'209.140.16.0/22','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-1). ');
$ax += cidrblock($address,'209.140.21.0/24','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-2). ');
$ax += cidrblock($address,'209.140.22.0/23','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-3). ');
$ax += cidrblock($address,'209.140.24.0/21','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-4). ');
$ax += cidrblock($address,'209.217.224.0/19','Landis Holdings Inc, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS11042-5). ');


// New Dream Network, LLC (updated 2016.01.18)
// AS26347
$ax += cidrblock($address,'64.90.32.0/19','New Dream Network LLC (ASN-AS26347-00). ');
$ax += cidrblock($address,'64.111.96.0/19','New Dream Network LLC (ASN-AS26347-01). ');
$ax += cidrblock($address,'66.33.192.0/20','New Dream Network LLC (ASN-AS26347-02). ');
$ax += cidrblock($address,'66.33.208.0/21','New Dream Network LLC (ASN-AS26347-03). ');
$ax += cidrblock($address,'66.33.216.0/24','New Dream Network LLC (ASN-AS26347-04). ');
$ax += cidrblock($address,'66.33.218.0/23','New Dream Network LLC (ASN-AS26347-05). ');
$ax += cidrblock($address,'66.33.220.0/22','New Dream Network LLC (ASN-AS26347-06). ');
$ax += cidrblock($address,'67.205.0.0/19','New Dream Network LLC (ASN-AS26347-07). ');
$ax += cidrblock($address,'67.205.32.0/24','New Dream Network LLC (ASN-AS26347-08). ');
$ax += cidrblock($address,'67.205.35.0/24','New Dream Network LLC (ASN-AS26347-09). ');
$ax += cidrblock($address,'67.205.36.0/22','New Dream Network LLC (ASN-AS26347-10). ');
$ax += cidrblock($address,'67.205.40.0/21','New Dream Network LLC (ASN-AS26347-11). ');
$ax += cidrblock($address,'67.205.48.0/20','New Dream Network LLC (ASN-AS26347-12). ');
$ax += cidrblock($address,'69.163.128.0/17','New Dream Network LLC (ASN-AS26347-13). ');
$ax += cidrblock($address,'75.119.192.0/19','New Dream Network LLC (ASN-AS26347-14). ');
$ax += cidrblock($address,'173.236.128.0/17','New Dream Network LLC (ASN-AS26347-15). ');
$ax += cidrblock($address,'205.196.208.0/20','New Dream Network LLC (ASN-AS26347-16). ');
$ax += cidrblock($address,'208.97.128.0/19','New Dream Network LLC (ASN-AS26347-17). ');
$ax += cidrblock($address,'208.97.160.0/20','New Dream Network LLC (ASN-AS26347-18). ');
$ax += cidrblock($address,'208.97.176.0/21','New Dream Network LLC (ASN-AS26347-19). ');
$ax += cidrblock($address,'208.97.184.0/23','New Dream Network LLC (ASN-AS26347-20). ');
$ax += cidrblock($address,'208.97.187.0/24','New Dream Network LLC (ASN-AS26347-21). ');
$ax += cidrblock($address,'208.97.188.0/22','New Dream Network LLC (ASN-AS26347-22). ');
$ax += cidrblock($address,'208.113.128.0/22','New Dream Network LLC (ASN-AS26347-23). ');
$ax += cidrblock($address,'208.113.136.0/22','New Dream Network LLC (ASN-AS26347-24). ');
$ax += cidrblock($address,'208.113.140.0/23','New Dream Network LLC (ASN-AS26347-25). ');
$ax += cidrblock($address,'208.113.142.0/24','New Dream Network LLC (ASN-AS26347-26). ');
$ax += cidrblock($address,'208.113.144.0/20','New Dream Network LLC (ASN-AS26347-27). ');
$ax += cidrblock($address,'208.113.160.0/19','New Dream Network LLC (ASN-AS26347-28). ');
$ax += cidrblock($address,'208.113.192.0/19','New Dream Network LLC (ASN-AS26347-29). ');
$ax += cidrblock($address,'208.113.224.0/20','New Dream Network LLC (ASN-AS26347-30). ');
$ax += cidrblock($address,'208.113.240.0/22','New Dream Network LLC (ASN-AS26347-31). ');
$ax += cidrblock($address,'208.113.248.0/21','New Dream Network LLC (ASN-AS26347-32). ');


// HostDime.com, Inc. (updated 2016.01.18)
// AS33182
$ax += cidrblock($address,'5.226.173.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-00). ');
$ax += cidrblock($address,'8.10.120.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-01). ');
$ax += cidrblock($address,'8.33.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-02). ');
$ax += cidrblock($address,'23.92.60.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-03). ');
$ax += cidrblock($address,'23.239.129.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-04). ');
$ax += cidrblock($address,'23.239.134.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-05). ');
$ax += cidrblock($address,'23.239.145.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-06). ');
$ax += cidrblock($address,'23.239.159.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-07). ');
$ax += cidrblock($address,'23.249.224.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-08). ');
$ax += cidrblock($address,'45.59.16.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-09). ');
$ax += cidrblock($address,'45.59.31.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-10). ');
$ax += cidrblock($address,'63.142.244.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-11). ');
$ax += cidrblock($address,'64.37.48.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-12). ');
$ax += cidrblock($address,'64.72.112.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-13). ');
$ax += cidrblock($address,'66.7.192.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-14). ');
$ax += cidrblock($address,'66.195.16.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-15). ');
$ax += cidrblock($address,'66.195.124.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-16). ');
$ax += cidrblock($address,'66.195.240.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-17). ');
$ax += cidrblock($address,'67.23.224.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-18). ');
$ax += cidrblock($address,'69.80.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-19). ');
$ax += cidrblock($address,'72.29.64.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-20). ');
$ax += cidrblock($address,'86.111.176.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-21). ');
$ax += cidrblock($address,'98.142.96.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-22). ');
$ax += cidrblock($address,'103.13.241.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-23). ');
$ax += cidrblock($address,'103.13.242.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-24). ');
$ax += cidrblock($address,'104.143.92.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-25). ');
$ax += cidrblock($address,'104.194.218.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-26). ');
$ax += cidrblock($address,'138.121.200.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-27). ');
$ax += cidrblock($address,'138.128.160.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-28). ');
$ax += cidrblock($address,'143.255.56.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-29). ');
$ax += cidrblock($address,'162.221.184.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-30). ');
$ax += cidrblock($address,'172.111.134.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-31). ');
$ax += cidrblock($address,'179.191.176.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-32). ');
$ax += cidrblock($address,'181.214.51.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-33). ');
$ax += cidrblock($address,'184.171.240.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-34). ');
$ax += cidrblock($address,'185.7.80.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-35). ');
$ax += cidrblock($address,'185.34.40.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-36). ');
$ax += cidrblock($address,'185.38.44.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-37). ');
$ax += cidrblock($address,'190.123.196.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-38). ');
$ax += cidrblock($address,'191.96.101.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-39). ');
$ax += cidrblock($address,'191.101.48.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-40). ');
$ax += cidrblock($address,'198.49.64.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-41). ');
$ax += cidrblock($address,'198.136.48.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-42). ');
$ax += cidrblock($address,'199.168.184.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-43). ');
$ax += cidrblock($address,'200.106.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-44). ');
$ax += cidrblock($address,'201.131.124.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-45). ');
$ax += cidrblock($address,'209.148.83.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-46). ');
$ax += cidrblock($address,'209.148.85.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-47). ');
$ax += cidrblock($address,'209.148.90.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-48). ');
$ax += cidrblock($address,'212.18.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-49). ');


// Aruba S.p.A. (updated 2016.01.18)
// AS31034
$ax += cidrblock($address,'5.249.128.0/19','Aruba S.p.A. (ASN-AS31034-00). ');
$ax += cidrblock($address,'31.11.32.0/21','Aruba S.p.A. (ASN-AS31034-01). ');
$ax += cidrblock($address,'31.14.128.0/20','Aruba S.p.A. (ASN-AS31034-02). ');
$ax += cidrblock($address,'46.37.0.0/19','Aruba S.p.A. (ASN-AS31034-03). ');
$ax += cidrblock($address,'62.149.128.0/17','Aruba S.p.A. (ASN-AS31034-04). ');
$ax += cidrblock($address,'66.71.128.0/18','Aruba S.p.A. (ASN-AS31034-05). ');
$ax += cidrblock($address,'77.223.16.0/20','Aruba S.p.A. (ASN-AS31034-06). ');
$ax += cidrblock($address,'80.88.80.0/20','Aruba S.p.A. (ASN-AS31034-07). ');
$ax += cidrblock($address,'82.102.4.0/24','Aruba S.p.A. (ASN-AS31034-08). ');
$ax += cidrblock($address,'85.235.128.0/19','Aruba S.p.A. (ASN-AS31034-09). ');
$ax += cidrblock($address,'89.36.208.0/22','Aruba S.p.A. (ASN-AS31034-10). ');
$ax += cidrblock($address,'89.46.64.0/20','Aruba S.p.A. (ASN-AS31034-11). ');
$ax += cidrblock($address,'89.46.104.0/21','Aruba S.p.A. (ASN-AS31034-12). ');
$ax += cidrblock($address,'89.46.192.0/21','Aruba S.p.A. (ASN-AS31034-13). ');
$ax += cidrblock($address,'93.186.240.0/20','Aruba S.p.A. (ASN-AS31034-14). ');
$ax += cidrblock($address,'95.110.128.0/17','Aruba S.p.A. (ASN-AS31034-15). ');
$ax += cidrblock($address,'109.70.240.0/21','Aruba S.p.A. (ASN-AS31034-16). ');
$ax += cidrblock($address,'134.255.176.0/21','Aruba S.p.A. (ASN-AS31034-17). ');
$ax += cidrblock($address,'178.255.241.0/24','Aruba S.p.A. (ASN-AS31034-18). ');
$ax += cidrblock($address,'185.5.93.0/24','Aruba S.p.A. (ASN-AS31034-19). ');
$ax += cidrblock($address,'185.56.8.0/22','Aruba S.p.A. (ASN-AS31034-20). ');
$ax += cidrblock($address,'185.57.108.0/22','Aruba S.p.A. (ASN-AS31034-21). ');
$ax += cidrblock($address,'185.58.116.0/22','Aruba S.p.A. (ASN-AS31034-22). ');
$ax += cidrblock($address,'185.58.120.0/22','Aruba S.p.A. (ASN-AS31034-23). ');
$ax += cidrblock($address,'185.58.192.0/22','Aruba S.p.A. (ASN-AS31034-24). ');
$ax += cidrblock($address,'185.62.0.0/22','Aruba S.p.A. (ASN-AS31034-25). ');
$ax += cidrblock($address,'188.213.160.0/20','Aruba S.p.A. (ASN-AS31034-26). ');
$ax += cidrblock($address,'193.254.240.0/23','Aruba S.p.A. (ASN-AS31034-27). ');
$ax += cidrblock($address,'194.126.148.0/23','Aruba S.p.A. (ASN-AS31034-28). ');
$ax += cidrblock($address,'195.128.234.0/23','Aruba S.p.A. (ASN-AS31034-29). ');
$ax += cidrblock($address,'195.225.168.0/22','Aruba S.p.A. (ASN-AS31034-30). ');
$ax += cidrblock($address,'195.234.171.0/24','Aruba S.p.A. (ASN-AS31034-31). ');
$ax += cidrblock($address,'195.250.34.0/24','Aruba S.p.A. (ASN-AS31034-32). ');
$ax += cidrblock($address,'209.227.192.0/18','Aruba S.p.A. (ASN-AS31034-33). ');
$ax += cidrblock($address,'217.73.224.0/20','Aruba S.p.A. (ASN-AS31034-34). ');


// ISPsystem (updated 2016.01.18)
// AS29182
$ax += cidrblock($address,'149.154.64.0/21','ISPsystem (ASN-AS29182-00). ');
$ax += cidrblock($address,'185.43.4.0/22','ISPsystem (ASN-AS29182-01). ');
$ax += cidrblock($address,'185.60.132.0/22','ISPsystem (ASN-AS29182-02). ');
$ax += cidrblock($address,'185.63.188.0/22','ISPsystem (ASN-AS29182-03). ');
$ax += cidrblock($address,'188.120.224.0/19','ISPsystem (ASN-AS29182-04). ');
$ax += cidrblock($address,'193.150.0.0/23','ISPsystem (ASN-AS29182-05). ');
$ax += cidrblock($address,'212.22.83.0/24','ISPsystem (ASN-AS29182-06). ');
$ax += cidrblock($address,'212.109.192.0/21','ISPsystem (ASN-AS29182-07). ');
$ax += cidrblock($address,'212.109.216.0/21','ISPsystem (ASN-AS29182-08). ');
$ax += cidrblock($address,'213.5.184.0/21','ISPsystem (ASN-AS29182-09). ');
$ax += cidrblock($address,'213.159.208.0/21','ISPsystem (ASN-AS29182-10). ');
$ax += cidrblock($address,'5.8.63.0/24','ISPsystem (ASN-AS29182-11). ');
$ax += cidrblock($address,'37.46.128.0/21','ISPsystem (ASN-AS29182-12). ');
$ax += cidrblock($address,'37.230.112.0/21','ISPsystem (ASN-AS29182-13). ');
$ax += cidrblock($address,'62.109.0.0/19','ISPsystem (ASN-AS29182-14). ');
$ax += cidrblock($address,'77.246.144.0/20','ISPsystem (ASN-AS29182-15). ');
$ax += cidrblock($address,'78.24.216.0/21','ISPsystem (ASN-AS29182-16). ');
$ax += cidrblock($address,'80.87.192.0/21','ISPsystem (ASN-AS29182-17). ');
$ax += cidrblock($address,'80.87.200.0/22','ISPsystem (ASN-AS29182-18). ');
$ax += cidrblock($address,'82.146.32.0/19','ISPsystem (ASN-AS29182-19). ');
$ax += cidrblock($address,'83.220.168.0/21','ISPsystem (ASN-AS29182-20). ');
$ax += cidrblock($address,'91.240.84.0/22','ISPsystem (ASN-AS29182-21). ');
$ax += cidrblock($address,'92.63.96.0/20','ISPsystem (ASN-AS29182-22). ');
$ax += cidrblock($address,'94.250.248.0/21','ISPsystem (ASN-AS29182-23). ');


// Hostinger International (updated 2016.01.18)
// AS47583
$ax += cidrblock($address,'31.170.160.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-0). ');
$ax += cidrblock($address,'31.220.16.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-1). ');
$ax += cidrblock($address,'31.220.48.0/20','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-2). ');
$ax += cidrblock($address,'31.220.104.0/22','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-3). ');
$ax += cidrblock($address,'31.220.108.0/23','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-4). ');
$ax += cidrblock($address,'31.220.110.0/24','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-5). ');
$ax += cidrblock($address,'93.188.160.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-6). ');
$ax += cidrblock($address,'185.28.20.0/22','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-7). ');
$ax += cidrblock($address,'195.110.58.0/23','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-8). ');
$ax += cidrblock($address,'212.1.208.0/21','Hostinger International, Bothost and/or Server Farm. Not an access provider ISP (ASN-AS47583-9). ');


// CloudFlare, Inc. (updated 2016.01.18)
// AS13335
$ax += cidrblock($address,'66.6.45.0/24','CloudFlare, Inc. (ASN-AS13335-00). ');
$ax += cidrblock($address,'103.22.200.0/23','CloudFlare, Inc. (ASN-AS13335-01). ');
$ax += cidrblock($address,'103.22.203.0/24','CloudFlare, Inc. (ASN-AS13335-02). ');
$ax += cidrblock($address,'103.31.4.0/22','CloudFlare, Inc. (ASN-AS13335-03). ');
$ax += cidrblock($address,'104.16.0.0/12','CloudFlare, Inc. (ASN-AS13335-04). ');
$ax += cidrblock($address,'108.162.192.0/19','CloudFlare, Inc. (ASN-AS13335-05). ');
$ax += cidrblock($address,'108.162.225.0/24','CloudFlare, Inc. (ASN-AS13335-06). ');
$ax += cidrblock($address,'108.162.226.0/23','CloudFlare, Inc. (ASN-AS13335-07). ');
$ax += cidrblock($address,'108.162.228.0/23','CloudFlare, Inc. (ASN-AS13335-08). ');
$ax += cidrblock($address,'108.162.232.0/21','CloudFlare, Inc. (ASN-AS13335-09). ');
$ax += cidrblock($address,'108.162.240.0/21','CloudFlare, Inc. (ASN-AS13335-10). ');
$ax += cidrblock($address,'108.162.248.0/22','CloudFlare, Inc. (ASN-AS13335-11). ');
$ax += cidrblock($address,'108.162.255.0/24','CloudFlare, Inc. (ASN-AS13335-12). ');
$ax += cidrblock($address,'141.101.64.0/22','CloudFlare, Inc. (ASN-AS13335-13). ');
$ax += cidrblock($address,'141.101.70.0/23','CloudFlare, Inc. (ASN-AS13335-14). ');
$ax += cidrblock($address,'141.101.72.0/21','CloudFlare, Inc. (ASN-AS13335-15). ');
$ax += cidrblock($address,'141.101.80.0/20','CloudFlare, Inc. (ASN-AS13335-16). ');
$ax += cidrblock($address,'141.101.96.0/19','CloudFlare, Inc. (ASN-AS13335-17). ');
$ax += cidrblock($address,'162.158.0.0/18','CloudFlare, Inc. (ASN-AS13335-18). ');
$ax += cidrblock($address,'162.158.68.0/23','CloudFlare, Inc. (ASN-AS13335-19). ');
$ax += cidrblock($address,'162.158.72.0/21','CloudFlare, Inc. (ASN-AS13335-20). ');
$ax += cidrblock($address,'162.158.83.0/24','CloudFlare, Inc. (ASN-AS13335-21). ');
$ax += cidrblock($address,'162.158.84.0/22','CloudFlare, Inc. (ASN-AS13335-22). ');
$ax += cidrblock($address,'162.158.88.0/21','CloudFlare, Inc. (ASN-AS13335-23). ');
$ax += cidrblock($address,'162.158.96.0/21','CloudFlare, Inc. (ASN-AS13335-24). ');
$ax += cidrblock($address,'162.158.104.0/22','CloudFlare, Inc. (ASN-AS13335-25). ');
$ax += cidrblock($address,'162.158.108.0/23','CloudFlare, Inc. (ASN-AS13335-26). ');
$ax += cidrblock($address,'162.158.112.0/20','CloudFlare, Inc. (ASN-AS13335-27). ');
$ax += cidrblock($address,'162.158.128.0/21','CloudFlare, Inc. (ASN-AS13335-28). ');
$ax += cidrblock($address,'162.158.140.0/22','CloudFlare, Inc. (ASN-AS13335-29). ');
$ax += cidrblock($address,'162.158.144.0/20','CloudFlare, Inc. (ASN-AS13335-30). ');
$ax += cidrblock($address,'162.158.160.0/19','CloudFlare, Inc. (ASN-AS13335-31). ');
$ax += cidrblock($address,'162.158.192.0/21','CloudFlare, Inc. (ASN-AS13335-32). ');
$ax += cidrblock($address,'162.158.200.0/22','CloudFlare, Inc. (ASN-AS13335-33). ');
$ax += cidrblock($address,'162.158.208.0/21','CloudFlare, Inc. (ASN-AS13335-34). ');
$ax += cidrblock($address,'162.158.216.0/23','CloudFlare, Inc. (ASN-AS13335-35). ');
$ax += cidrblock($address,'162.158.220.0/22','CloudFlare, Inc. (ASN-AS13335-36). ');
$ax += cidrblock($address,'162.158.252.0/22','CloudFlare, Inc. (ASN-AS13335-37). ');
$ax += cidrblock($address,'162.159.0.0/16','CloudFlare, Inc. (ASN-AS13335-38). ');
$ax += cidrblock($address,'173.245.48.0/23','CloudFlare, Inc. (ASN-AS13335-39). ');
$ax += cidrblock($address,'173.245.50.0/24','CloudFlare, Inc. (ASN-AS13335-40). ');
$ax += cidrblock($address,'173.245.52.0/22','CloudFlare, Inc. (ASN-AS13335-41). ');
$ax += cidrblock($address,'173.245.56.0/21','CloudFlare, Inc. (ASN-AS13335-42). ');
$ax += cidrblock($address,'188.114.96.0/21','CloudFlare, Inc. (ASN-AS13335-43). ');
$ax += cidrblock($address,'188.114.104.0/24','CloudFlare, Inc. (ASN-AS13335-44). ');
$ax += cidrblock($address,'188.114.106.0/24','CloudFlare, Inc. (ASN-AS13335-45). ');
$ax += cidrblock($address,'188.114.108.0/22','CloudFlare, Inc. (ASN-AS13335-46). ');
$ax += cidrblock($address,'190.93.240.0/20','CloudFlare, Inc. (ASN-AS13335-47). ');
$ax += cidrblock($address,'197.234.240.0/22','CloudFlare, Inc. (ASN-AS13335-48). ');
$ax += cidrblock($address,'198.41.128.0/19','CloudFlare, Inc. (ASN-AS13335-49). ');
$ax += cidrblock($address,'198.41.176.0/20','CloudFlare, Inc. (ASN-AS13335-50). ');
$ax += cidrblock($address,'198.41.192.0/19','CloudFlare, Inc. (ASN-AS13335-51). ');
$ax += cidrblock($address,'198.41.224.0/22','CloudFlare, Inc. (ASN-AS13335-52). ');
$ax += cidrblock($address,'198.41.228.0/24','CloudFlare, Inc. (ASN-AS13335-53). ');
$ax += cidrblock($address,'198.41.232.0/21','CloudFlare, Inc. (ASN-AS13335-54). ');
$ax += cidrblock($address,'198.41.240.0/22','CloudFlare, Inc. (ASN-AS13335-55). ');
$ax += cidrblock($address,'198.41.247.0/24','CloudFlare, Inc. (ASN-AS13335-56). ');
$ax += cidrblock($address,'198.41.248.0/21','CloudFlare, Inc. (ASN-AS13335-57). ');
$ax += cidrblock($address,'199.27.128.0/21','CloudFlare, Inc. (ASN-AS13335-58). ');


// home.pl (updated 2016.01.18)
// AS12824
$ax += cidrblock($address,'46.41.128.0/18','home.pl (ASN-AS12824-0). ');
$ax += cidrblock($address,'46.242.128.0/17','home.pl (ASN-AS12824-1). ');
$ax += cidrblock($address,'62.129.192.0/18','home.pl (ASN-AS12824-2). ');
$ax += cidrblock($address,'79.96.0.0/16','home.pl (ASN-AS12824-3). ');
$ax += cidrblock($address,'89.161.128.0/17','home.pl (ASN-AS12824-4). ');
$ax += cidrblock($address,'188.128.128.0/17','home.pl (ASN-AS12824-5). ');
$ax += cidrblock($address,'212.85.96.0/19','home.pl (ASN-AS12824-6). ');


// Masterhost (updated 2016.01.18)
// AS25532
$ax += cidrblock($address,'83.222.0.0/19','Masterhost (ASN-AS25532-0). ');
$ax += cidrblock($address,'84.252.128.0/18','Masterhost (ASN-AS25532-1). ');
$ax += cidrblock($address,'87.242.64.0/18','Masterhost (ASN-AS25532-2). ');
$ax += cidrblock($address,'90.156.128.0/17','Masterhost (ASN-AS25532-3). ');
$ax += cidrblock($address,'217.16.16.0/20','Masterhost (ASN-AS25532-4). ');


// GoDaddy.com, LLC (updated 2016.01.18)
// AS26496
$ax += cidrblock($address,'23.229.128.0/17','Masterhost (ASN-AS26496-00). ');
$ax += cidrblock($address,'37.148.200.0/21','Masterhost (ASN-AS26496-01). ');
$ax += cidrblock($address,'45.40.128.0/20','Masterhost (ASN-AS26496-02). ');
$ax += cidrblock($address,'45.40.144.0/21','Masterhost (ASN-AS26496-03). ');
$ax += cidrblock($address,'45.40.152.0/22','Masterhost (ASN-AS26496-04). ');
$ax += cidrblock($address,'45.40.160.0/19','Masterhost (ASN-AS26496-05). ');
$ax += cidrblock($address,'46.252.192.0/20','Masterhost (ASN-AS26496-06). ');
$ax += cidrblock($address,'50.62.0.0/15','Masterhost (ASN-AS26496-07). ');
$ax += cidrblock($address,'63.241.136.0/24','Masterhost (ASN-AS26496-08). ');
$ax += cidrblock($address,'64.202.160.0/19','Masterhost (ASN-AS26496-09). ');
$ax += cidrblock($address,'66.210.39.0/24','Masterhost (ASN-AS26496-10). ');
$ax += cidrblock($address,'68.178.128.0/17','Masterhost (ASN-AS26496-11). ');
$ax += cidrblock($address,'72.167.0.0/16','Masterhost (ASN-AS26496-12). ');
$ax += cidrblock($address,'97.74.0.0/16','Masterhost (ASN-AS26496-13). ');
$ax += cidrblock($address,'103.1.172.0/22','Masterhost (ASN-AS26496-14). ');
$ax += cidrblock($address,'104.238.64.0/18','Masterhost (ASN-AS26496-15). ');
$ax += cidrblock($address,'107.180.0.0/17','Masterhost (ASN-AS26496-16). ');
$ax += cidrblock($address,'118.139.160.0/19','Masterhost (ASN-AS26496-17). ');
$ax += cidrblock($address,'146.255.32.0/20','Masterhost (ASN-AS26496-18). ');
$ax += cidrblock($address,'160.153.0.0/16','Masterhost (ASN-AS26496-19). ');
$ax += cidrblock($address,'166.62.0.0/17','Masterhost (ASN-AS26496-20). ');
$ax += cidrblock($address,'173.201.0.0/16','Masterhost (ASN-AS26496-21). ');
$ax += cidrblock($address,'182.50.128.0/19','Masterhost (ASN-AS26496-22). ');
$ax += cidrblock($address,'184.168.0.0/16','Masterhost (ASN-AS26496-23). ');
$ax += cidrblock($address,'185.7.248.0/22','Masterhost (ASN-AS26496-24). ');
$ax += cidrblock($address,'188.121.32.0/19','Masterhost (ASN-AS26496-25). ');
$ax += cidrblock($address,'192.169.128.0/17','Masterhost (ASN-AS26496-26). ');
$ax += cidrblock($address,'192.186.192.0/18','Masterhost (ASN-AS26496-27). ');
$ax += cidrblock($address,'198.12.128.0/17','Masterhost (ASN-AS26496-28). ');
$ax += cidrblock($address,'198.71.128.0/17','Masterhost (ASN-AS26496-29). ');
$ax += cidrblock($address,'203.124.96.0/19','Masterhost (ASN-AS26496-30). ');
$ax += cidrblock($address,'208.109.0.0/16','Masterhost (ASN-AS26496-31). ');
$ax += cidrblock($address,'216.69.128.0/18','Masterhost (ASN-AS26496-32). ');


// Dattatec.com (updated 2016.01.18)
// AS27823
$ax += cidrblock($address,'138.36.236.0/22','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS27823-0). ');
$ax += cidrblock($address,'138.219.40.0/22','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS27823-1). ');
$ax += cidrblock($address,'179.43.112.0/20','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS27823-2). ');
$ax += cidrblock($address,'200.58.96.0/19','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS27823-3). ');


// Vautron Rechenzentrum AG (updated 2016.01.18)
// AS25504
$ax += cidrblock($address,'151.252.48.0/20','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-00). ');
$ax += cidrblock($address,'158.58.144.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-01). ');
$ax += cidrblock($address,'185.73.242.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-02). ');
$ax += cidrblock($address,'185.90.232.0/22','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-03). ');
$ax += cidrblock($address,'193.111.208.0/22','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-04). ');
$ax += cidrblock($address,'193.150.4.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-05). ');
$ax += cidrblock($address,'193.254.184.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-06). ');
$ax += cidrblock($address,'195.191.92.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-07). ');
$ax += cidrblock($address,'46.151.160.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-08). ');
$ax += cidrblock($address,'46.175.56.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-09). ');
$ax += cidrblock($address,'83.243.56.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-10). ');
$ax += cidrblock($address,'89.200.168.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-11). ');
$ax += cidrblock($address,'91.198.21.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-12). ');
$ax += cidrblock($address,'91.223.141.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-13). ');
$ax += cidrblock($address,'91.223.145.0/24','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-14). ');
$ax += cidrblock($address,'91.233.26.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-15). ');
$ax += cidrblock($address,'91.247.144.0/23','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-16). ');
$ax += cidrblock($address,'94.102.208.0/20','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-17). ');
$ax += cidrblock($address,'109.235.56.0/21','Bothost and/or Server Farm. Not an access provider ISP (ASN-AS25504-18). ');


// SuperHost.pl (updated 2016.01.18)
// AS41079
$ax += cidrblock($address,'91.199.22.0/24','SuperHost.pl (ASN-AS41079-0). ');
$ax += cidrblock($address,'178.250.40.0/21','SuperHost.pl (ASN-AS41079-1). ');
$ax += cidrblock($address,'193.218.152.0/22','SuperHost.pl (ASN-AS41079-2). ');
$ax += cidrblock($address,'194.169.227.0/24','SuperHost.pl (ASN-AS41079-3). ');
$ax += cidrblock($address,'195.2.254.0/23','SuperHost.pl (ASN-AS41079-4). ');
$ax += cidrblock($address,'195.114.0.0/23','SuperHost.pl (ASN-AS41079-5). ');


// *SPAM HOSTS*

// Telecommunication Infrastructure Company (updated 2016.01.18)
// AS48159
$ax += cidrblock($address,'2.179.68.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-000). ');
$ax += cidrblock($address,'2.179.79.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-001). ');
$ax += cidrblock($address,'2.179.80.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-002). ');
$ax += cidrblock($address,'2.179.88.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-003). ');
$ax += cidrblock($address,'2.179.92.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-004). ');
$ax += cidrblock($address,'2.179.94.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-005). ');
$ax += cidrblock($address,'2.179.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-006). ');
$ax += cidrblock($address,'2.179.128.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-007). ');
$ax += cidrblock($address,'2.179.160.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-008). ');
$ax += cidrblock($address,'2.179.180.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-000). ');
$ax += cidrblock($address,'2.179.208.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-010). ');
$ax += cidrblock($address,'2.180.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-011). ');
$ax += cidrblock($address,'2.180.64.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-012). ');
$ax += cidrblock($address,'2.181.0.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-013). ');
$ax += cidrblock($address,'2.181.64.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-014). ');
$ax += cidrblock($address,'2.181.112.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-015). ');
$ax += cidrblock($address,'2.181.128.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-016). ');
$ax += cidrblock($address,'2.181.200.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-017). ');
$ax += cidrblock($address,'2.181.208.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-018). ');
$ax += cidrblock($address,'2.181.216.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-019). ');
$ax += cidrblock($address,'2.181.220.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-020). ');
$ax += cidrblock($address,'2.181.224.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-021). ');
$ax += cidrblock($address,'2.181.236.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-022). ');
$ax += cidrblock($address,'2.181.240.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-023). ');
$ax += cidrblock($address,'2.181.248.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-024). ');
$ax += cidrblock($address,'2.182.0.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-025). ');
$ax += cidrblock($address,'2.182.44.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-026). ');
$ax += cidrblock($address,'2.182.128.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-027). ');
$ax += cidrblock($address,'2.182.144.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-028). ');
$ax += cidrblock($address,'2.182.152.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-029). ');
$ax += cidrblock($address,'2.182.180.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-030). ');
$ax += cidrblock($address,'2.182.216.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-031). ');
$ax += cidrblock($address,'2.182.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-032). ');
$ax += cidrblock($address,'2.182.240.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-033). ');
$ax += cidrblock($address,'2.183.16.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-034). ');
$ax += cidrblock($address,'2.183.48.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-035). ');
$ax += cidrblock($address,'2.183.80.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-036). ');
$ax += cidrblock($address,'2.183.96.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-037). ');
$ax += cidrblock($address,'2.183.192.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-038). ');
$ax += cidrblock($address,'2.183.200.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-039). ');
$ax += cidrblock($address,'2.183.208.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-040). ');
$ax += cidrblock($address,'2.183.232.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-041). ');
$ax += cidrblock($address,'2.184.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-042). ');
$ax += cidrblock($address,'2.184.71.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-043). ');
$ax += cidrblock($address,'2.184.74.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-044). ');
$ax += cidrblock($address,'2.184.76.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-045). ');
$ax += cidrblock($address,'2.184.80.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-046). ');
$ax += cidrblock($address,'2.184.96.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-047). ');
$ax += cidrblock($address,'2.184.112.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-048). ');
$ax += cidrblock($address,'2.184.116.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-049). ');
$ax += cidrblock($address,'2.184.120.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-050). ');
$ax += cidrblock($address,'2.184.128.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-051). ');
$ax += cidrblock($address,'2.184.172.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-052). ');
$ax += cidrblock($address,'2.184.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-053). ');
$ax += cidrblock($address,'2.184.192.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-054). ');
$ax += cidrblock($address,'2.185.0.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-055). ');
$ax += cidrblock($address,'2.185.18.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-056). ');
$ax += cidrblock($address,'2.185.40.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-057). ');
$ax += cidrblock($address,'2.185.88.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-058). ');
$ax += cidrblock($address,'2.185.128.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-059). ');
$ax += cidrblock($address,'2.185.226.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-060). ');
$ax += cidrblock($address,'2.185.234.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-061). ');
$ax += cidrblock($address,'2.185.248.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-062). ');
$ax += cidrblock($address,'2.187.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-063). ');
$ax += cidrblock($address,'2.187.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-064). ');
$ax += cidrblock($address,'2.187.130.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-065). ');
$ax += cidrblock($address,'2.187.132.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-066). ');
$ax += cidrblock($address,'2.187.136.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-067). ');
$ax += cidrblock($address,'2.187.144.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-068). ');
$ax += cidrblock($address,'2.187.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-069). ');
$ax += cidrblock($address,'2.187.192.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-070). ');
$ax += cidrblock($address,'2.187.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-071). ');
$ax += cidrblock($address,'2.187.240.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-072). ');
$ax += cidrblock($address,'2.187.248.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-073). ');
$ax += cidrblock($address,'2.188.28.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-074). ');
$ax += cidrblock($address,'2.189.70.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-075). ');
$ax += cidrblock($address,'5.232.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-076). ');
$ax += cidrblock($address,'5.232.192.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-077). ');
$ax += cidrblock($address,'5.232.216.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-078). ');
$ax += cidrblock($address,'5.232.224.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-079). ');
$ax += cidrblock($address,'5.233.46.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-080). ');
$ax += cidrblock($address,'5.233.48.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-081). ');
$ax += cidrblock($address,'5.233.64.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-082). ');
$ax += cidrblock($address,'5.233.128.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-083). ');
$ax += cidrblock($address,'5.233.240.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-084). ');
$ax += cidrblock($address,'5.234.36.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-085). ');
$ax += cidrblock($address,'5.234.40.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-086). ');
$ax += cidrblock($address,'5.234.160.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-087). ');
$ax += cidrblock($address,'5.234.184.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-088). ');
$ax += cidrblock($address,'5.234.192.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-089). ');
$ax += cidrblock($address,'5.234.208.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-090). ');
$ax += cidrblock($address,'5.234.216.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-091). ');
$ax += cidrblock($address,'5.235.186.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-092). ');
$ax += cidrblock($address,'5.235.188.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-093). ');
$ax += cidrblock($address,'5.235.192.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-094). ');
$ax += cidrblock($address,'5.236.0.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-095). ');
$ax += cidrblock($address,'5.236.64.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-096). ');
$ax += cidrblock($address,'5.236.96.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-097). ');
$ax += cidrblock($address,'5.236.156.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-098). ');
$ax += cidrblock($address,'5.236.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-099). ');
$ax += cidrblock($address,'5.236.192.0/18','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-100). ');
$ax += cidrblock($address,'5.237.0.0/16','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-101). ');
$ax += cidrblock($address,'5.238.48.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-102). ');
$ax += cidrblock($address,'5.239.144.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-103). ');
$ax += cidrblock($address,'5.239.160.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-104). ');
$ax += cidrblock($address,'5.239.176.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-105). ');
$ax += cidrblock($address,'5.239.192.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-106). ');
$ax += cidrblock($address,'31.14.144.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-107). ');
$ax += cidrblock($address,'37.153.128.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-108). ');
$ax += cidrblock($address,'37.156.112.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-109). ');
$ax += cidrblock($address,'37.156.128.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-110). ');
$ax += cidrblock($address,'37.156.160.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-111). ');
$ax += cidrblock($address,'37.156.176.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-112). ');
$ax += cidrblock($address,'46.34.164.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-113). ');
$ax += cidrblock($address,'46.34.168.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-114). ');
$ax += cidrblock($address,'46.34.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-115). ');
$ax += cidrblock($address,'46.100.76.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-116). ');
$ax += cidrblock($address,'46.100.164.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-117). ');
$ax += cidrblock($address,'46.100.168.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-118). ');
$ax += cidrblock($address,'46.102.120.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-119). ');
$ax += cidrblock($address,'46.102.184.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-120). ');
$ax += cidrblock($address,'78.38.8.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-121). ');
$ax += cidrblock($address,'78.38.16.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-122). ');
$ax += cidrblock($address,'78.38.24.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-123). ');
$ax += cidrblock($address,'78.38.40.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-124). ');
$ax += cidrblock($address,'78.38.53.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-125). ');
$ax += cidrblock($address,'78.38.54.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-126). ');
$ax += cidrblock($address,'78.38.100.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-127). ');
$ax += cidrblock($address,'78.38.104.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-128). ');
$ax += cidrblock($address,'78.38.168.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-129). ');
$ax += cidrblock($address,'78.38.191.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-130). ');
$ax += cidrblock($address,'78.38.234.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-131). ');
$ax += cidrblock($address,'78.39.24.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-132). ');
$ax += cidrblock($address,'78.39.88.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-133). ');
$ax += cidrblock($address,'78.39.94.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-134). ');
$ax += cidrblock($address,'78.39.96.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-135). ');
$ax += cidrblock($address,'78.39.113.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-136). ');
$ax += cidrblock($address,'78.39.117.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-137). ');
$ax += cidrblock($address,'78.39.120.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-138). ');
$ax += cidrblock($address,'78.39.122.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-139). ');
$ax += cidrblock($address,'78.39.124.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-140). ');
$ax += cidrblock($address,'78.39.126.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-141). ');
$ax += cidrblock($address,'78.39.144.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-142). ');
$ax += cidrblock($address,'78.39.149.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-143). ');
$ax += cidrblock($address,'78.39.150.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-144). ');
$ax += cidrblock($address,'78.39.240.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-145). ');
$ax += cidrblock($address,'80.191.160.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-146). ');
$ax += cidrblock($address,'80.191.168.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-147). ');
$ax += cidrblock($address,'80.191.184.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-148). ');
$ax += cidrblock($address,'80.191.187.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-149). ');
$ax += cidrblock($address,'80.191.212.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-150). ');
$ax += cidrblock($address,'80.191.239.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-151). ');
$ax += cidrblock($address,'85.185.6.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-152). ');
$ax += cidrblock($address,'85.185.8.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-153). ');
$ax += cidrblock($address,'85.185.20.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-154). ');
$ax += cidrblock($address,'85.185.30.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-155). ');
$ax += cidrblock($address,'85.185.80.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-156). ');
$ax += cidrblock($address,'85.185.167.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-157). ');
$ax += cidrblock($address,'85.185.172.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-158). ');
$ax += cidrblock($address,'85.185.192.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-159). ');
$ax += cidrblock($address,'85.185.218.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-160). ');
$ax += cidrblock($address,'85.204.80.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-161). ');
$ax += cidrblock($address,'85.204.128.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-162). ');
$ax += cidrblock($address,'85.204.208.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-163). ');
$ax += cidrblock($address,'86.104.240.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-164). ');
$ax += cidrblock($address,'89.34.248.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-165). ');
$ax += cidrblock($address,'89.35.64.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-166). ');
$ax += cidrblock($address,'89.36.48.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-167). ');
$ax += cidrblock($address,'89.36.96.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-168). ');
$ax += cidrblock($address,'89.36.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-169). ');
$ax += cidrblock($address,'89.37.144.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-170). ');
$ax += cidrblock($address,'89.37.240.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-171). ');
$ax += cidrblock($address,'89.38.80.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-172). ');
$ax += cidrblock($address,'89.38.184.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-173). ');
$ax += cidrblock($address,'89.38.192.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-174). ');
$ax += cidrblock($address,'89.40.152.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-175). ');
$ax += cidrblock($address,'89.40.240.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-176). ');
$ax += cidrblock($address,'89.43.216.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-177). ');
$ax += cidrblock($address,'89.43.224.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-178). ');
$ax += cidrblock($address,'89.44.128.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-179). ');
$ax += cidrblock($address,'89.44.176.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-180). ');
$ax += cidrblock($address,'93.117.0.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-181). ');
$ax += cidrblock($address,'93.117.32.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-182). ');
$ax += cidrblock($address,'93.117.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-183). ');
$ax += cidrblock($address,'94.176.8.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-184). ');
$ax += cidrblock($address,'178.251.208.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-185). ');
$ax += cidrblock($address,'178.251.212.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-186). ');
$ax += cidrblock($address,'178.251.215.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-187). ');
$ax += cidrblock($address,'185.11.88.0/23','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-188). ');
$ax += cidrblock($address,'185.45.188.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-189). ');
$ax += cidrblock($address,'185.119.240.0/22','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-190). ');
$ax += cidrblock($address,'188.211.128.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-191). ');
$ax += cidrblock($address,'188.211.192.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-192). ');
$ax += cidrblock($address,'188.212.64.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-193). ');
$ax += cidrblock($address,'188.212.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-194). ');
$ax += cidrblock($address,'188.212.208.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-195). ');
$ax += cidrblock($address,'188.212.224.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-196). ');
$ax += cidrblock($address,'188.213.96.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-197). ');
$ax += cidrblock($address,'188.213.144.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-198). ');
$ax += cidrblock($address,'188.214.160.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-199). ');
$ax += cidrblock($address,'188.215.128.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-200). ');
$ax += cidrblock($address,'188.215.176.0/20','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-201). ');
$ax += cidrblock($address,'188.215.192.0/19','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-202). ');
$ax += cidrblock($address,'217.219.21.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-203). ');
$ax += cidrblock($address,'217.219.144.0/21','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-204). ');
$ax += cidrblock($address,'217.219.207.0/24','Telecommunication Infrastructure Company, spammy network (ASN-AS48159-205). ');


// IPGLOBE DATACENTER (updated 2016.01.18)
// AS53225
$ax += cidrblock($address,'131.255.140.0/22','IPGLOBE DATACENTER, spammy network (ASN-AS53225-1). ');
$ax += cidrblock($address,'177.137.16.0/20','IPGLOBE DATACENTER, spammy network (ASN-AS53225-2). ');
$ax += cidrblock($address,'186.251.128.0/20','IPGLOBE DATACENTER, spammy network (ASN-AS53225-3). ');
$ax += cidrblock($address,'191.241.60.0/22','IPGLOBE DATACENTER, spammy network (ASN-AS53225-4). ');


// Mobin Net Communication (updated 2016.01.18)
// AS50810
$ax += cidrblock($address,'2.182.160.0/20','Mobin Net Communication, spammy network (ASN-AS50810-00). ');
$ax += cidrblock($address,'2.183.128.0/20','Mobin Net Communication, spammy network (ASN-AS50810-01). ');
$ax += cidrblock($address,'2.183.184.0/21','Mobin Net Communication, spammy network (ASN-AS50810-02). ');
$ax += cidrblock($address,'2.183.202.0/23','Mobin Net Communication, spammy network (ASN-AS50810-03). ');
$ax += cidrblock($address,'2.188.32.0/21','Mobin Net Communication, spammy network (ASN-AS50810-04). ');
$ax += cidrblock($address,'5.52.0.0/16','Mobin Net Communication, spammy network (ASN-AS50810-05). ');
$ax += cidrblock($address,'5.201.128.0/17','Mobin Net Communication, spammy network (ASN-AS50810-06). ');
$ax += cidrblock($address,'37.98.0.0/17','Mobin Net Communication, spammy network (ASN-AS50810-07). ');
$ax += cidrblock($address,'37.156.16.0/20','Mobin Net Communication, spammy network (ASN-AS50810-08). ');
$ax += cidrblock($address,'62.102.128.0/20','Mobin Net Communication, spammy network (ASN-AS50810-09). ');
$ax += cidrblock($address,'80.242.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-10). ');
$ax += cidrblock($address,'85.239.192.0/19','Mobin Net Communication, spammy network (ASN-AS50810-11). ');
$ax += cidrblock($address,'86.107.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-12). ');
$ax += cidrblock($address,'86.107.208.0/20','Mobin Net Communication, spammy network (ASN-AS50810-13). ');
$ax += cidrblock($address,'89.37.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-14). ');
$ax += cidrblock($address,'89.43.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-15). ');
$ax += cidrblock($address,'89.45.48.0/20','Mobin Net Communication, spammy network (ASN-AS50810-16). ');
$ax += cidrblock($address,'91.133.128.0/17','Mobin Net Communication, spammy network (ASN-AS50810-17). ');
$ax += cidrblock($address,'92.114.16.0/20','Mobin Net Communication, spammy network (ASN-AS50810-18). ');
$ax += cidrblock($address,'93.117.176.0/20','Mobin Net Communication, spammy network (ASN-AS50810-19). ');
$ax += cidrblock($address,'93.119.208.0/20','Mobin Net Communication, spammy network (ASN-AS50810-20). ');
$ax += cidrblock($address,'94.101.128.0/20','Mobin Net Communication, spammy network (ASN-AS50810-21). ');
$ax += cidrblock($address,'94.101.240.0/20','Mobin Net Communication, spammy network (ASN-AS50810-22). ');
$ax += cidrblock($address,'109.108.160.0/19','Mobin Net Communication, spammy network (ASN-AS50810-23). ');
$ax += cidrblock($address,'109.203.128.0/19','Mobin Net Communication, spammy network (ASN-AS50810-24). ');
$ax += cidrblock($address,'130.255.192.0/18','Mobin Net Communication, spammy network (ASN-AS50810-25). ');
$ax += cidrblock($address,'178.131.0.0/16','Mobin Net Communication, spammy network (ASN-AS50810-26). ');
$ax += cidrblock($address,'185.22.28.0/22','Mobin Net Communication, spammy network (ASN-AS50810-27). ');
$ax += cidrblock($address,'188.122.96.0/19','Mobin Net Communication, spammy network (ASN-AS50810-28). ');
$ax += cidrblock($address,'188.209.192.0/20','Mobin Net Communication, spammy network (ASN-AS50810-29). ');
$ax += cidrblock($address,'188.210.64.0/20','Mobin Net Communication, spammy network (ASN-AS50810-30). ');
$ax += cidrblock($address,'188.210.192.0/20','Mobin Net Communication, spammy network (ASN-AS50810-31). ');
$ax += cidrblock($address,'188.211.0.0/20','Mobin Net Communication, spammy network (ASN-AS50810-32). ');
$ax += cidrblock($address,'188.212.48.0/20','Mobin Net Communication, spammy network (ASN-AS50810-33). ');
$ax += cidrblock($address,'188.212.240.0/21','Mobin Net Communication, spammy network (ASN-AS50810-34). ');
$ax += cidrblock($address,'188.213.64.0/20','Mobin Net Communication, spammy network (ASN-AS50810-35). ');
$ax += cidrblock($address,'188.213.192.0/21','Mobin Net Communication, spammy network (ASN-AS50810-36). ');


// sfip84
// AS57879
$ax += cidrblock($address,'37.143.48.0/20','sfip84, spammy network (ASN-AS57879-0). ');
$ax += cidrblock($address,'185.3.248.0/22','sfip84, spammy network (ASN-AS57879-1). ');



// Three Hutchison (updated 2016.01.18)
// AS45727
$ax += cidrblock($address,'23.0.166.0/23','Three Hutchison, spammy network (ASN-AS45727-00). ');
$ax += cidrblock($address,'23.3.76.0/22','Three Hutchison, spammy network (ASN-AS45727-01). ');
$ax += cidrblock($address,'23.5.192.0/20','Three Hutchison, spammy network (ASN-AS45727-02). ');
$ax += cidrblock($address,'23.13.0.0/20','Three Hutchison, spammy network (ASN-AS45727-03). ');
$ax += cidrblock($address,'103.10.64.0/22','Three Hutchison, spammy network (ASN-AS45727-04). ');
$ax += cidrblock($address,'180.214.232.0/23','Three Hutchison, spammy network (ASN-AS45727-05). ');
$ax += cidrblock($address,'180.214.234.0/24','Three Hutchison, spammy network (ASN-AS45727-06). ');
$ax += cidrblock($address,'202.67.32.0/20','Three Hutchison, spammy network (ASN-AS45727-07). ');
$ax += cidrblock($address,'223.255.224.0/23','Three Hutchison, spammy network (ASN-AS45727-08). ');
$ax += cidrblock($address,'223.255.227.0/24','Three Hutchison, spammy network (ASN-AS45727-09). ');
$ax += cidrblock($address,'223.255.228.0/22','Three Hutchison, spammy network (ASN-AS45727-10). ');


// PT Excelcomindo Pratama (updated 2016.01.18)
// AS24203
$ax += cidrblock($address,'112.215.16.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-00). ');
$ax += cidrblock($address,'112.215.19.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-01). ');
$ax += cidrblock($address,'112.215.26.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-02). ');
$ax += cidrblock($address,'112.215.36.0/23','PT Excelcomindo Pratama, spammy network (ASN-AS24203-03). ');
$ax += cidrblock($address,'112.215.44.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-04). ');
$ax += cidrblock($address,'112.215.47.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-05). ');
$ax += cidrblock($address,'112.215.50.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-06). ');
$ax += cidrblock($address,'112.215.52.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-07). ');
$ax += cidrblock($address,'112.215.60.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-08). ');
$ax += cidrblock($address,'112.215.63.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-09). ');
$ax += cidrblock($address,'112.215.64.0/23','PT Excelcomindo Pratama, spammy network (ASN-AS24203-10). ');
$ax += cidrblock($address,'112.215.66.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-11). ');
$ax += cidrblock($address,'112.215.71.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-12). ');
$ax += cidrblock($address,'112.215.79.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-13). ');
$ax += cidrblock($address,'112.215.84.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-14). ');
$ax += cidrblock($address,'112.215.88.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-15). ');
$ax += cidrblock($address,'112.215.101.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-16). ');
$ax += cidrblock($address,'112.215.102.0/23','PT Excelcomindo Pratama, spammy network (ASN-AS24203-17). ');
$ax += cidrblock($address,'112.215.104.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-18). ');
$ax += cidrblock($address,'112.215.123.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-19). ');
$ax += cidrblock($address,'112.215.124.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-20). ');
$ax += cidrblock($address,'112.215.126.0/23','PT Excelcomindo Pratama, spammy network (ASN-AS24203-21). ');
$ax += cidrblock($address,'112.215.147.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-22). ');
$ax += cidrblock($address,'112.215.148.0/23','PT Excelcomindo Pratama, spammy network (ASN-AS24203-23). ');
$ax += cidrblock($address,'202.152.240.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-24). ');
$ax += cidrblock($address,'202.152.243.0/24','PT Excelcomindo Pratama, spammy network (ASN-AS24203-25). ');


// Hesabgar Pardaz Gharb Co. (updated 2016.01.18)
// AS48359
$ax += cidrblock($address,'185.47.48.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-0). ');
$ax += cidrblock($address,'185.82.64.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-1). ');
$ax += cidrblock($address,'185.121.56.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-2). ');
$ax += cidrblock($address,'185.125.20.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-3). ');
$ax += cidrblock($address,'188.253.80.0/21','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-4). ');
$ax += cidrblock($address,'188.253.92.0/22','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-5). ');
$ax += cidrblock($address,'212.95.128.0/20','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-6). ');
$ax += cidrblock($address,'212.95.144.0/21','Hesabgar Pardaz Gharb Co., spammy network (ASN-AS48359-7). ');


// TELEBUCARAMANGA S.A. (updated 2016.01.18)
// AS22368
$ax += cidrblock($address,'181.174.0.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-00). ');
$ax += cidrblock($address,'186.183.128.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-01). ');
$ax += cidrblock($address,'186.183.192.0/20','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-02). ');
$ax += cidrblock($address,'190.13.0.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-03). ');
$ax += cidrblock($address,'190.96.128.0/17','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-04). ');
$ax += cidrblock($address,'190.124.96.0/19','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-05). ');
$ax += cidrblock($address,'190.184.128.0/18','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-06). ');
$ax += cidrblock($address,'200.21.235.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-07). ');
$ax += cidrblock($address,'200.21.236.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-08). ');
$ax += cidrblock($address,'200.21.238.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-09). ');
$ax += cidrblock($address,'200.69.127.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-10). ');
$ax += cidrblock($address,'200.93.150.0/23','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-11). ');
$ax += cidrblock($address,'200.119.1.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-12). ');
$ax += cidrblock($address,'201.221.128.0/19','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-13). ');
$ax += cidrblock($address,'201.245.178.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-14). ');
$ax += cidrblock($address,'205.160.32.0/24','TELEBUCARAMANGA S.A., spammy network (ASN-AS22368-15). ');


// PARSONLINE (updated 2016.01.18)
// AS16322
$ax += cidrblock($address,'5.78.0.0/16','PARSONLINE, spammy network (ASN-AS16322-00). ');
$ax += cidrblock($address,'31.214.132.0/23','PARSONLINE, spammy network (ASN-AS16322-01). ');
$ax += cidrblock($address,'31.214.146.0/23','PARSONLINE, spammy network (ASN-AS16322-02). ');
$ax += cidrblock($address,'31.214.154.0/24','PARSONLINE, spammy network (ASN-AS16322-03). ');
$ax += cidrblock($address,'31.214.168.0/22','PARSONLINE, spammy network (ASN-AS16322-04). ');
$ax += cidrblock($address,'31.214.200.0/23','PARSONLINE, spammy network (ASN-AS16322-05). ');
$ax += cidrblock($address,'31.214.228.0/22','PARSONLINE, spammy network (ASN-AS16322-06). ');
$ax += cidrblock($address,'31.214.248.0/21','PARSONLINE, spammy network (ASN-AS16322-07). ');
$ax += cidrblock($address,'37.10.64.0/22','PARSONLINE, spammy network (ASN-AS16322-08). ');
$ax += cidrblock($address,'37.27.0.0/16','PARSONLINE, spammy network (ASN-AS16322-09). ');
$ax += cidrblock($address,'46.41.192.0/18','PARSONLINE, spammy network (ASN-AS16322-10). ');
$ax += cidrblock($address,'46.62.128.0/17','PARSONLINE, spammy network (ASN-AS16322-11). ');
$ax += cidrblock($address,'82.99.192.0/18','PARSONLINE, spammy network (ASN-AS16322-12). ');
$ax += cidrblock($address,'91.98.0.0/15','PARSONLINE, spammy network (ASN-AS16322-13). ');
$ax += cidrblock($address,'95.156.216.0/22','PARSONLINE, spammy network (ASN-AS16322-14). ');
$ax += cidrblock($address,'95.156.222.0/23','PARSONLINE, spammy network (ASN-AS16322-15). ');
$ax += cidrblock($address,'95.156.233.0/24','PARSONLINE, spammy network (ASN-AS16322-16). ');
$ax += cidrblock($address,'95.156.234.0/23','PARSONLINE, spammy network (ASN-AS16322-17). ');
$ax += cidrblock($address,'95.156.236.0/23','PARSONLINE, spammy network (ASN-AS16322-18). ');
$ax += cidrblock($address,'95.156.248.0/23','PARSONLINE, spammy network (ASN-AS16322-19). ');
$ax += cidrblock($address,'95.156.252.0/22','PARSONLINE, spammy network (ASN-AS16322-20). ');
$ax += cidrblock($address,'109.230.192.0/23','PARSONLINE, spammy network (ASN-AS16322-21). ');
$ax += cidrblock($address,'109.230.221.0/24','PARSONLINE, spammy network (ASN-AS16322-22). ');
$ax += cidrblock($address,'109.230.223.0/24','PARSONLINE, spammy network (ASN-AS16322-23). ');
$ax += cidrblock($address,'109.230.242.0/24','PARSONLINE, spammy network (ASN-AS16322-24). ');
$ax += cidrblock($address,'109.230.247.0/24','PARSONLINE, spammy network (ASN-AS16322-25). ');
$ax += cidrblock($address,'134.255.196.0/23','PARSONLINE, spammy network (ASN-AS16322-26). ');
$ax += cidrblock($address,'134.255.200.0/21','PARSONLINE, spammy network (ASN-AS16322-27). ');
$ax += cidrblock($address,'134.255.245.0/24','PARSONLINE, spammy network (ASN-AS16322-28). ');
$ax += cidrblock($address,'134.255.246.0/24','PARSONLINE, spammy network (ASN-AS16322-29). ');
$ax += cidrblock($address,'134.255.248.0/23','PARSONLINE, spammy network (ASN-AS16322-30). ');
$ax += cidrblock($address,'185.4.30.0/23','PARSONLINE, spammy network (ASN-AS16322-31). ');
$ax += cidrblock($address,'185.13.228.0/22','PARSONLINE, spammy network (ASN-AS16322-32). ');
$ax += cidrblock($address,'185.44.64.0/23','PARSONLINE, spammy network (ASN-AS16322-33). ');
$ax += cidrblock($address,'185.55.224.0/24','PARSONLINE, spammy network (ASN-AS16322-34). ');
$ax += cidrblock($address,'188.245.0.0/16','PARSONLINE, spammy network (ASN-AS16322-35). ');
$ax += cidrblock($address,'213.217.32.0/19','PARSONLINE, spammy network (ASN-AS16322-36). ');


// OBEC (updated 2016.01.18)
// AS133042
$ax += cidrblock($address,'202.29.66.0/24','OBEC, spammy network (ASN-AS133042-0). ');
$ax += cidrblock($address,'202.29.172.0/22','OBEC, spammy network (ASN-AS133042-1). ');
$ax += cidrblock($address,'202.29.176.0/22','OBEC, spammy network (ASN-AS133042-2). ');


// *CURRENT EVENTS*

// Excite Japan Co. LTD. (updated 2016.01.18)
// AS45682
$ax += cidrblock($address,'180.235.96.0/21','Excite Japan Co. LTD. known bad host, not an access provider ISP (ASN-AS45682-0). '); //75a


// O2 Sp. Z.O.O.
// AS31080
$ax += cidrblock($address,'193.17.41.0/24','O2 Sp. Z.O.O. known bad host (ASN-AS31080-0). '); //75a
$ax += cidrblock($address,'193.222.135.0/24','O2 Sp. Z.O.O. known bad host (ASN-AS31080-1). '); //75a


// City Telecom
// AS48271
$ax += cidrblock($address,'212.2.224.0/19','City Telecom, known bad host (ASN-AS48271-0). '); //75a


// Leaseweb USA (updated 2016.01.18)
// AS30633
$ax += cidrblock($address,'89.34.27.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-00). ');
$ax += cidrblock($address,'89.144.17.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-01). ');
$ax += cidrblock($address,'108.59.0.0/20','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-02). ');
$ax += cidrblock($address,'162.210.192.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-03). ');
$ax += cidrblock($address,'162.219.212.0/22','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-04). ');
$ax += cidrblock($address,'185.28.70.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-05). ');
$ax += cidrblock($address,'192.96.200.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-06). ');
$ax += cidrblock($address,'198.7.56.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-07). ');
$ax += cidrblock($address,'199.58.84.0/22','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-08). ');
$ax += cidrblock($address,'199.115.112.0/21','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-09). ');
$ax += cidrblock($address,'207.244.64.0/18','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-10). ');
$ax += cidrblock($address,'208.64.45.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-11). ');
$ax += cidrblock($address,'209.192.128.0/17','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-12). ');
$ax += cidrblock($address,'212.7.200.0/24','Leaseweb USA, known bad hosting provider, not an access provider ISP (ASN-AS30633-13). ');


// FriendFinder Networks (updated 2016.01.18)
// AS32527
$ax += cidrblock($address,'69.165.98.0/24','FriendFinder Networks, known bad host (ASN-AS32527-0). ');
$ax += cidrblock($address,'208.88.176.0/22','FriendFinder Networks, known bad host (ASN-AS32527-1). ');


// MediaFire LLC (updated 2016.01.18)
// AS46179
$ax += cidrblock($address,'199.91.152.0/21','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-0). ');
$ax += cidrblock($address,'205.196.120.0/22','MediaFire LLC known bad host, not an access provider ISP (ASN-AS46179-1). ');


// H1 LLC (updated 2016.01.18)
// AS6870
$ax += cidrblock($address,'37.252.0.0/23','H1 LLC, known bad host (ASN-AS6870-00). ');
$ax += cidrblock($address,'91.105.232.0/21','H1 LLC, known bad host (ASN-AS6870-01). ');
$ax += cidrblock($address,'91.212.106.0/24','H1 LLC, known bad host (ASN-AS6870-02). ');
$ax += cidrblock($address,'91.212.150.0/24','H1 LLC, known bad host (ASN-AS6870-03). ');
$ax += cidrblock($address,'93.170.76.0/24','H1 LLC, known bad host (ASN-AS6870-04). ');
$ax += cidrblock($address,'95.47.161.0/24','H1 LLC, known bad host (ASN-AS6870-05). ');
$ax += cidrblock($address,'146.120.110.0/24','H1 LLC, known bad host (ASN-AS6870-06). ');
$ax += cidrblock($address,'185.4.64.0/22','H1 LLC, known bad host (ASN-AS6870-07). ');
$ax += cidrblock($address,'188.64.168.0/21','H1 LLC, known bad host (ASN-AS6870-08). ');
$ax += cidrblock($address,'194.31.59.0/24','H1 LLC, known bad host (ASN-AS6870-09). ');
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


// Dirty30 test

$ax += (inmatch($query,'xdirty30x','Test Trigger to test function D30. '));

?>