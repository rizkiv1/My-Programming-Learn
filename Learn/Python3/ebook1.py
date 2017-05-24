menu_item = 0
list1 = []
while menu_item != 9:
	print('-----------')
	print('pilih')
	print('1. cetak daftar')
	print('2. tambahkan nama ke dalam daftar')
	print('3. hapus nama dari daftar')
	print('4. mengganti item/nama dari daftar')
	print('9. keluar')
	menu_item = input('masukkan pilihan ')
	if menu_item = '1':
		current = 0
		if len(list1) > 0:
			while current <= len(list):
				print (current,".",list1[current])
				current = current + 1
			else:
				print('daftar kosong')
	elif menu_item == 2:
		nama = input('masukkan nama ')
		list1.append(nama)
	elif menu_item == 3:
		del_nama = input('pilih nama yang ingin dihapus')
		if del_nama in list1:
			item_number = list1.index(del_nama)
			del list1[item_number]
			clr
		else:
			print (del_name,'was not found')
	elif menu_item == 4:
		nama_lama = input('yang ingin diganti')
		if nama_lama in list1:
			item_number = list1.index(nama_lama)
			nama_baru = input('masukkan yang baru ')
			list1[item_number] = nama_baru
		else:
			print('tidak ditemukan')
print('good bye')
