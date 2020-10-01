<?php
	session_start(); 	
	include 'koneksi.php'; 		
	$username=$_GET['username'];
	$password=$_GET['password'];
	$_SESSION['username']=$username;

	$query=mysql_query("select * from registrasi where username='$username' and password='$password'");	 
	$xxx=mysql_num_rows($query);	
	
	if($xxx==TRUE){ 
		header("location:index.php");    
	}else
	{  
		echo '<font color="red">LOGIN FAILED! <br/>Username or Password was wrong!</font>';
	}
?>