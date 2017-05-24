jkawin	= 0
jistri	= 0
janak	= 0
pajaktak16 = 0


pribadi = input('masukkan gaji perbulan = ')

kawin = input('menikah? (y/n) ')
if kawin == ('y'):
	jkawin = int(input('berapa istri anda? '))

istri = input('apakah istri bekerja? (y/n)')
if istri == ('y'):
	jistri = int(input('berapa gaji istri? '))

anak = input('anda memiliki anak?(y/n) ')
if anak == ('y'):
	janak = int(input(' berapa anak anda '))
pribadi = int(pribadi) * 12

pajaktak16 = int(pribadi) - 54000000

if jkawin >= 1:
	pajaktak16 = int(pajaktak16) - 2025000

if jistri >= 1:
	pajaktak16 = int(pajaktak16) - 4050000

if janak == 1:
	pajaktak16 = int(pajaktak16) - 2025000
elif janak == 2:
	pajaktak16 = int(pajaktak16) - 4050000
elif janak >= 3:
	pajaktak16 = int(pajaktak16) - 6075000

if pajaktak16 <=0:
	print('hasilnya gak bayar pajak')
else:
	print( 'pajak yang harus dibayar dari ', pajaktak16)
	if pajaktak16 <= 50000000:
		pajak = int(pajaktak16) * 100 / 5
	elif pajaktak16 > 50000000 :
		pajak = (int(pajaktak16) - 50000000) * 100 / 15
		pajak = int(pajak) + 2500000
	elif pajaktak16 > 250000000:
		pajak = (int(pajaktak16) - 250000000) * 100 / 25
		pajak = int(pajak) + 32500000
	elif pajaktak16 > 500000000:
		pajak =  (int(pajaktak16) - 500000000) * 100 / 30
		pajak = int(pajak) + 107500000
	print(pajak) 
