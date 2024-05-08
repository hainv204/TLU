--Tao csdl QLHangHoa
create database QLHangHoa
--TH nhieu csdl muon sd cdsl nao thi sd truy van use
use QLHangHoa
--Tao bang Khach
create table Khach(
Mak char(10) not null primary key,
TenK char(30),
DiaChi char(50),
DienThoai char(12) default '0',
constraint Ten_DC unique(TenK,DiaChi))
--Tao bang loai hang
create table LoaiHang(
MaL char(10) not null primary key,
TenL char(30))
--Tao bang Hang
create table Hang(
MaH char(10) not null primary key,
TenH char(50),
SLTon int,
MaL char(10),
foreign key (MaL) references LoaiHang(MaL))
--Tao bang HoaDon
create table HoaDon(
SoHD char(10) not null primary key,
NgayHD date,
MaK char(10),
foreign key (MaK) references Khach(MaK))
--Tao bang ChitietHD
create table ChitietHD(
SoHD char(10) not null,
MaH char(10) not null,
SLBan int,
DonGia int,
primary key(SoHD,MaH),
foreign key (SoHD) references HoaDon(SoHD),
foreign key (MaH) references Hang(MaH),
check(SLBan>=0))
--Hien thi cac table
select *from Khach
select *from Hang
select *from LoaiHang
select *from HoaDon
select *from ChitietHD
--Them cac gia tri vao bang Khach
insert into Khach values
('02',N'Nguyen Ngoc Quang',N'Thanh Hoa','0378692658'),
('01',N'Nguyen Van Hai',N'Thanh Hoa','0974820274'),
('03',N'Hoang Duc Phong',N'Thai Binh','0395592392'),
('04',N'Nguyen Van A',N'Ha Noi','0123888999'),
('05',N'Nguyen Van B',N'Ha Noi','0188666255'),
('06',N'Nguyen Van C',N'Ha Noi','0238666255')
--Them cac gia tri vao bang HoaDon
insert into HoaDon values
('A1','10/2/2023','01'),
('A2','10/1/2023','02'),
('A3','10/8/2023','03'),
('A4','10/10/2023','04'),
('A5','10/22/2023','05'),
('A6','20231001','06')
--Them cac gia tri vao loai hang
insert into LoaiHang values
('K1','Banh'),
('K2','Keo'),
('K3','Sat Khuan')
--Them cac gia tri vao Hang
insert into Hang values
('QA','Banh quy kem','2','K1'),
('QD','Banh dau xanh','5','K1'),
('QC','Banh Chocopie','1','K1'),
('EA','Keo oi','6','K2'),
('EB','Keo bac ha','2','K2'),
('PA','Nuoc rua chen','8','K3')
--Them gia tri vao ChitietHD
insert into ChitietHD values
('A1','QA','200','8000'),
('A2','QA','200','8000'),
('A3','QD','100','13000'),
('A4','QD','100','13000'),
('A5','QC','55','10000'),
('A6','EA','500','5000'),
('A6','EB','20','5000'),
('A6','PA','900','15000')
--Xoa dong du lieu trong bang Khach
delete Khach
where TenK='Nguyen Van Hai'
