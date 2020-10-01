<?php
	session_start();
	
	include "koneksi.php";
	$username=$_SESSION['username'];
	
	$nama=$_POST['nama'];
	$nohp=$_POST['nohp'];
	$email=$_POST['email'];
	$password=$_POST['password'];
	$sukses = "Data berhasil disimpan!";
	$_SESSION['sukses']= $sukses;
	$pesan = $nama.' berhasil mengedit profil!';
	
	$simpan="UPDATE registrasi SET 
		nama ='$nama',
		nohp='$nohp',
		email='$email',
		password='$password' where username='$username'";
		
		mysql_query($simpan); 
		
		if ($simpan) {
			include "sendMessage.php"; //mengirim notifikasi ke id telegram tertentu
			echo "<script>window.location.href = 'index.php';</script>";
		} else
		{
			echo 'Data profil gagal diupdate!';
			echo '<br/>';
			echo '<a href="edit.php">Kembali</a>';
		}	
?>		