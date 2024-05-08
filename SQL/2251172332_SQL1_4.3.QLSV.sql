--Tạo database
create database QLSVC4
use QLSVC4
--Tạo bảng khoa
create table KHOA(
Makh char(10) not null primary key,
Vpkh nvarchar(50))
--Tạo bảng lớp
create table LOP(
Malop char(10) not null primary key,
Makh char(10),
foreign key (Makh) references KHOA(Makh))
--Tạo bảng sinh viên
create table SINHVIEN(
masv char(10) not null primary key,
hosv nvarchar(50),
tensv nvarchar(50),
nssv int,
dcsv nvarchar(50),
loptr nvarchar(20),
malop char(10),
foreign key (malop) references LOP(malop))
--Tạo bảng môn học
create table MONHOC(
mamh char(10) not null primary key,
tenmh nvarchar(50),
LT int,
TH int)
--tạo bảng CT môn học
create table CTMONHOC(
malop char(10),
HK varchar(10),
mamh char(10),
foreign key (malop) references LOP(malop),
foreign key (mamh) references MONHOC(mamh))
--Tạo bảng điểm sinh viên
create table DIEMSV(
masv char(10),
mamh char(10),
lan int,
diem float,
foreign key (masv) references SINHVIEN(masv),
foreign key (mamh) references MONHOC(mamh))
--Thêm dữ liệu vào các bảng
--khoa
INSERT INTO KHOA VALUES
('N01', N'CNTT'),
('N02', N'Kinh tế'),
('N03', N'Ngoại ngữ')
--lớp
INSERT INTO LOP  VALUES
('TH1', 'N01'),
('TH2', 'N01'),
('TH3', 'N02')
--sinh viên
INSERT INTO SINHVIEN VALUES
('SV001', N'Nguyễn Văn', N'A', 1995, N'123 Đường ABC', N'Yes', 'TH1'),
('SV002', N'Phạm Thị', N'B', 1996, N'456 Đường XYZ', N'No', 'TH1'),
('SV003', N'Trần Văn', N'C', 1997, N'789 Đường LMN', N'No', 'TH1'),
('SV004', N'Lê Thị', N'D', 1998, N'111 Đường PQR', N'No', 'TH1'),
('SV005', N'Huỳnh Văn', N'E', 1999, N'222 Đường STU', N'No', 'TH1'),
('SV006', N'Nguyễn Thị', N'F', 2000, N'333 Đường GHI', N'No', 'TH1'),
('SV007', N'Trần Thị', N'G', 2001, N'444 Đường JKL', N'No', 'TH2'),
('SV008', N'Lê Thị', N'H', 2002, N'555 Đường MNO', N'No', 'TH2'),
('SV009', N'Phạm Văn', N'I', 2003, N'666 Đường UVW', N'Yes', 'TH2'),
('SV010', N'Huỳnh Hoàng', N'J', 2004, N'777 Đường XYZ', N'No', 'TH2'),
('SV011', N'Nguyễn Thị', N'K', 2005, N'888 Đường ABC', N'No', 'TH2'),
('SV012', N'Trần Văn', N'L', 2006, N'999 Đường DEF', N'No', 'TH2'),
('SV013', N'Lê Thị', N'M', 2007, N'101 Đường GHI', N'No', 'TH2'),
('SV014', N'Phạm Văn', N'N', 2008, N'202 Đường JKL', N'No', 'TH3'),
('SV015', N'Huỳnh Hữu', N'O', 2009, N'303 Đường MNO', N'No', 'TH3')
--môn học
INSERT INTO MONHOC VALUES
('MH001', N'CSDL', 3, 2),
('MH002', N'CTDL', 2, 3),
('MH003', N'Kinh tế học', 4, 0),
('MH004', N'Ngôn ngữ học', 3, 1),
('MH005', N'Hóa học cơ bản', 2, 2),
('MH006', N'Tin học đại cương', 3, 2),
('MH007', N'Lịch sử Việt Nam', 4, 0),
('MH008', N'Quản trị kinh doanh', 3, 2),
('MH009', N'Mạng máy tính', 2, 3),
('MH010', N'Phân tích thiết kế hệ thống', 3, 2),
('MH011', N'Công nghệ web', 2, 3),
('MH012', N'Kỹ thuật lập trình', 3, 2),
('MH013', N'Hệ thống thông tin quản lý', 3, 2)
--chương trình học
INSERT INTO CTMONHOC VALUES
('TH1', 'HK1', 'MH001'),
('TH1', 'HK1', 'MH002'),
('TH1', 'HK1', 'MH006'),
('TH1', 'HK1', 'MH007'),
('TH1', 'HK1', 'MH009'),
('TH1', 'HK1', 'MH010'),
('TH1', 'HK2', 'MH011'),
('TH1', 'HK2', 'MH012'),
('TH1', 'HK2', 'MH013'),
('TH2', 'HK1', 'MH001'),
('TH2', 'HK1', 'MH002'),
('TH2', 'HK1', 'MH003'),
('TH2', 'HK1', 'MH004'),
('TH2', 'HK1', 'MH005'),
('TH2', 'HK1', 'MH006'),
('TH2', 'HK1', 'MH007'),
('TH2', 'HK2', 'MH008'),
('TH2', 'HK2', 'MH009'),
('TH2', 'HK2', 'MH010'),
('TH2', 'HK2', 'MH011'),
('TH2', 'HK2', 'MH012')
-- Thêm điểm cho sinh viên trong lớp 'TH1'
INSERT INTO DIEMSV VALUES
('SV001', 'MH001', 1, 8.5),('SV001', 'MH002', 1, 7.8),('SV001', 'MH006', 1, 9.0),('SV001', 'MH009', 1, 8.2),('SV001', 'MH010', 1, 9.5),('SV001', 'MH011', 1, 8),('SV001', 'MH012', 1, 9.5),
('SV002', 'MH001', 1, 9.2),('SV002', 'MH002', 1, 8.0),('SV002', 'MH006', 1, 7.5),('SV002', 'MH007', 1, 8.7),('SV002', 'MH009', 1, 7.2),('SV002', 'MH011', 1, 7.6),('SV002', 'MH012', 1, 9),('SV002', 'MH013', 1, 8.5),
('SV003', 'MH010', 1, 8.0),('SV003', 'MH009', 1, 7.5),('SV003', 'MH006', 1, 8.2),('SV003', 'MH002', 1, 7.9),('SV003', 'MH011', 1, 9.5),('SV003', 'MH013', 1, 8),
('SV004', 'MH001', 1, 7.7),('SV004', 'MH002', 1, 8.1),('SV004', 'MH007', 1, 7.4),('SV004', 'MH009', 1, 7.8),
('SV005', 'MH001', 1, 9.1),('SV005', 'MH002', 1, 8.5),('SV005', 'MH006', 1, 7.8),('SV005', 'MH007', 1, 8.0),('SV005', 'MH010', 1, 9.3),('SV005', 'MH011', 1, 7.8),('SV005', 'MH012', 1, 9.2),('SV005', 'MH013', 1, 8.3),
('SV006', 'MH001', 1, 8.8),('SV006', 'MH002', 1, 8.2),('SV006', 'MH006', 1, 8.7),('SV006', 'MH007', 1, 8.5),('SV006', 'MH009', 1, 8.9),('SV006', 'MH010', 1, 10),('SV006', 'MH013', 1, 9.2)
-- Thêm điểm cho sinh viên trong lớp 'TH2'
INSERT INTO DIEMSV VALUES
('SV007', 'MH001', 1, 8.9),('SV007', 'MH002', 1, 4),('SV007', 'MH003', 1, 8.0),('SV007', 'MH004', 1, 7.2),('SV007', 'MH005', 1, 8.5),
('SV008', 'MH001', 1, 7.8),('SV008', 'MH002', 1,4.5),('SV008', 'MH003', 1, 7.5),('SV008', 'MH004', 1, 8.3),('SV008', 'MH005', 1, 7.9),('SV008', 'MH008', 1, 7.6),('SV008', 'MH009', 1, 7.8),('SV008', 'MH010', 1, 7.7),('SV008', 'MH012', 1, 7.9),
('SV009', 'MH001', 1, 4),('SV009', 'MH002', 1, 8.2),('SV009', 'MH003', 1, 7.9),('SV009', 'MH004', 1, 8.1),('SV009', 'MH005', 1, 8.3),('SV009', 'MH006', 1, 8.5),('SV009', 'MH007', 1, 8.4),('SV009', 'MH008', 1, 8.6),('SV009', 'MH009', 1, 8.8),('SV009', 'MH010', 1, 8.7),('SV009', 'MH011', 1, 8.9),('SV009', 'MH012', 1, 9.0),
('SV010', 'MH001', 1, 7.6),('SV010', 'MH002', 1, 3.5),('SV010', 'MH003', 1, 7.7),('SV010', 'MH004', 1, 7.5),('SV010', 'MH005', 1, 7.9),('SV010', 'MH010', 1, 7.7),('SV010', 'MH011', 1, 7.5),('SV010', 'MH012', 1, 7.9),
('SV011', 'MH003', 1, 7.9),('SV011', 'MH004', 1, 8.1),('SV011', 'MH005', 1, 8.3),('SV011', 'MH006', 1, 8.5),('SV011', 'MH007', 1, 8.4),('SV011', 'MH008', 1, 8.6),('SV011', 'MH010', 1, 8.7),('SV011', 'MH011', 1, 8.9),('SV011', 'MH012', 1, 9.0),
('SV012', 'MH004', 1, 7.9),('SV012', 'MH005', 1, 8.0),('SV012', 'MH006', 1, 8.2),('SV012', 'MH007', 1, 8.1),('SV012', 'MH008', 1, 8.3),('SV012', 'MH009', 1, 8.5),('SV012', 'MH010', 1, 8.4),('SV012', 'MH011', 1, 8.6),('SV012', 'MH012', 1, 8.8),
('SV013', 'MH004', 1, 8.9),('SV013', 'MH006', 1, 8),('SV013', 'MH007', 1, 8.2),('SV013', 'MH010', 1, 10),('SV013', 'MH011', 1, 9.4),('SV013', 'MH012', 1, 8.5)
--1.Cho biết ds lớp
select *from LOP
--2.Cho biết dssv lớp TH1
select hosv,tensv from SINHVIEN join LOP on SINHVIEN.malop=LOP.Malop
where LOP.Malop='TH1'
--3.Cho biết dssv khoa CNTT
select hosv,tensv from SINHVIEN join LOP on LOP.Malop=SINHVIEN.malop
where LOP.Makh='N01'
--4.Cho biết chương trình học của lớp TH1
select * from CTMONHOC join LOP on LOP.Malop=CTMONHOC.malop
where LOP.Malop='TH1'
--5.Điểm lần 1 môn CSDL của sv lớp TH1
select hosv,tensv,diem from SINHVIEN join DIEMSV on DIEMSV.masv=SINHVIEN.masv
where lan=1 and mamh='MH001'
--6.DTB lần 1 môn CTDL của lớp TH1
select avg(diem) DTBLan1_TH1 from DIEMSV join SINHVIEN on SINHVIEN.masv=DIEMSV.masv
where lan=1 and malop in(select malop from LOP where malop='TH1')
--7.Số lượng SV lớp TH2
select count(masv) SLSV_TH2 from SINHVIEN join LOP on LOP.Malop=SINHVIEN.malop
where LOP.malop='TH2'
--8.Lớp TH1 phải học bao nhiêu môn trong HK1 và HK2
select count(distinct MONHOC.mamh) SoMonHoc_TH1 from MONHOC inner join DIEMSV on DIEMSV.mamh=MONHOC.mamh
where masv in(select masv from SINHVIEN where malop='TH1')
--9.Cho biết 3 sv đầu tiên có điểm thi lần 1 cao nhất môn CSDL
select top 3 hosv,tensv,diem from SINHVIEN 
join DIEMSV on DIEMSV.masv=SINHVIEN.masv
where lan=1 and mamh='MH001'
--10.Cho biết sĩ số của từng lớp
select count(*) SiSo,LOP.malop from SINHVIEN join LOP on LOP.Malop=SINHVIEN.malop
group by LOP.Malop
--11.Khoa nào đông sv nhất
select top 1 KHOA.Vpkh from KHOA inner join LOP on LOP.Makh=KHOA.Makh inner join SINHVIEN on SINHVIEN.malop=LOP.Malop
group by KHOA.Makh,KHOA.Vpkh/*nhóm theo makh ở đây ta cầu truy xuất ra tên khoa nên cần phải nhóm dữ liệu thêm cả vpkh*/
order by count(SINHVIEN.malop) desc
--12.Lớp nào đông nhất khoa CNTT
select top 1 LOP.Malop from KHOA 
inner join LOP on KHOA.Makh=LOP.Makh
inner join SINHVIEN on SINHVIEN.malop=LOP.Malop
where KHOA.Vpkh='CNTT'
group by LOP.Malop
order by count(SINHVIEN.masv) desc
--13.Môn học nào mà ở lần thi 1 có số sv không đạt nhiều nhất
select top 1 tenmh from MONHOC join DIEMSV on DIEMSV.mamh=MONHOC.mamh join SINHVIEN on SINHVIEN.masv=DIEMSV.masv
where lan=1 and diem<5
group by MONHOC.mamh,MONHOC.tenmh
order by count(SINHVIEN.masv) desc
--14.Tìm điểm thi lớn nhất của mỗi sv cho mỗi môn học(vì sv được thi nhiều lần)

--15.DTB của từng lớp trong khoa CNTT ở lần thi thứ 1 môn CSDL
--16.Sinh viên mào của lớp TH1 đã thi đạt tất cả các môn học của HK2
--17.DSSV nhận học bổng HK2 của lớp TH2,nghĩa là đạt tất cả các môn học của học kì này ở lần thi thứ nhất
--18.Biết rằng lớp TH1 đã học đủ 6 học kì,cho biết sv nào đủ điều kiện thi tốt nghiệp,nghĩa là đã đạt đủ tất cả các môn
--Hiển thị bảng dữ liệu
select*from KHOA
select*from LOP
select*from SINHVIEN
select*from MONHOC
select*from CTMONHOC
select*from DIEMSV
