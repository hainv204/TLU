--I.Tạo cơ sở dữ liệu
--Tạo database 
create database QLSINHVIEN
use QLSINHVIEN
--Tạo bảng khoa
create table DMKHOA(
makh char(10) not null,
tenkhoa nvarchar(50))
--Tạo bảng sinh viên
create table DMSINHVIEN(
masv char(10) not null,
hosv nvarchar(50),
tensv nvarchar(50),
phai nvarchar(10),
ngaysinh date,
noisinh nvarchar(50),
makhoa char(10),
hocbong float)
--Tạo bảng môn học
create table DMMONHOC(
mamh char(10) not null,
tenmh nvarchar(50),
sotiet int)
--Tạo bảng kết quả
create table KETQUA(
masv char(10),
mamh char(10),
diem float)
--II.Ràng buộc
--Thực hiện lệnh Alter Table... add constraint để kiểm tra các ràng buộc về khóa chính, khóa ngoại
alter table DMKHOA add constraint PK_makh primary key (makh)
alter table DMSINHVIEN add constraint PK_masv primary key(masv)
alter table DMSINHVIEN add constraint FK_makhoa foreign key (makhoa) references DMKHOA(makh)
alter table DMMONHOC add constraint PK_mamh primary key(mamh)
alter table KETQUA add constraint FK_masv foreign key (masv) references DMSINHVIEN(masv)
alter table KETQUA add constraint FK_mamh foreign key (mamh) references DMMONHOC(mamh)
--1.Ràng buộc số tiết trong bảng DMMONHOC phải từ 30 tiết trở lên
alter table DMMONHOC add constraint RB_sotiet check (sotiet>=30)
--2.Ràng buộc giá trị mặc định cho cột học bổng là 0
alter table DMSINHVIEN add constraint RB_hb default '0' for hocbong
--3.Ràng buộc điểm trong bảng KETQUA là 0<=điểm<=10
alter table KETQUA add constraint RB_Diem check(diem between 0 and 10)
--II.Truy vấn dữ liệu
--Thêm các trường dữ liệu cho các bảng
--khoa
insert into DMKHOA values
('N06',N'CNPM'),
('N01',N'Tin'),
('N02',N'Sinh'),
('N03',N'Công trình'),
('N04',N'Tài nguyên nước'),
('N05',N'Quản trị kinh doanh')
--sinh viên
INSERT INTO DMSINHVIEN VALUES
	('A01', N'Nguyễn Văn', N'Quân', N'Nam', '20041015', N'Hà Nội', 'N01',0),
	('SV01', N'Nguyễn Văn', N'A', N'Nam', '20040705', N'Thanh Hóa', 'N01',0),
    ('SV02', N'Trần Thị', N'B', N'Nữ', '20050110', N'Hà Nội', 'N02', 0),
    ('SV03', N'Lê Văn', N'C', N'Nam', '20031201', N'Hồ Chí Minh', 'N01', 500000),
    ('SV04', N'Phạm Thị', N'D', N'Nữ', '20041015', N'Hải Phòng', 'N03', 1000000),
    ('SV05', N'Nguyễn Thị', N'E', N'Nữ', '20050125', N'Hưng Yên', 'N02', 0),
    ('SV06', N'Trần Văn', N'F', N'Nam', '20040918', N'Đà Nẵng', 'N03', 200000),
    ('SV07', N'Lê Thị', N'G', N'Nữ', '20031210', N'Quảng Ninh', 'N02',0),
    ('SV08', N'Phạm Văn', N'H', N'Nam', '20050105', N'Hải Dương', 'N01',100000),
	('SV09', N'Vũ Thị', N'Mai', N'Nữ', '20050102', N'Nam Định', 'N07',0)
--môn học
INSERT INTO DMMONHOC VALUES
    ('D01', N'Toán rời rạc', 30),
    ('D02', N'Lập trình Java',50),
    ('D03', N'Cấu trúc dữ liệu và giải thuật', 35),
    ('D04', N'Hệ điều hành', 45),
    ('D05', N'Cơ sở dữ liệu', 50)
--kết quả
INSERT INTO KETQUA VALUES
    ('SV01', 'D01', 8.5),
    ('SV02', 'D02', 7.8),
    ('SV03', 'D03', 9.2),
    ('SV04', 'D05', 6),
    ('SV05', 'D05', 8)
--1) Cho biết danh sách các môn học (mã môn học, tên môn học, số tiết) mà sinh viên đã học
select * from DMMONHOC
--2) Liệt kê danh sách sinh viên có học bổng gồm các thông tin sau: Mã sinh viên, Họ tên sinh viên, Phái, Ngày sinh, Học bổng
select masv,hosv,tensv,phai,ngaysinh,hocbong from DMSINHVIEN
where hocbong>0
--3) Liệt kê danh sách sinh viên có điểm tất cả các môn từ 5 trở lên (sử dụng inner join và loại bỏ sự trùng lặp)
select hosv,tensv,diem from DMSINHVIEN inner join KETQUA on KETQUA.masv=DMSINHVIEN.masv
where diem>=5
--4) Liệt kê danh sách sinh viên gồm các thông tin sau: Mã sinh viên, Họ tên sinh viên, Phái, Tuổi, Nơi sinh. Trong đó tuổi sẽ được tính bằng cách lấy năm hiện hành trừ cho năm sinh
select masv,hosv,tensv,phai,2023-YEAR(ngaysinh) Tuoi,noisinh from DMSINHVIEN 
--5) Danh sách các môn học có tên bắt đầu bằng chữ T, gồm: Mã môn, Tên môn, Số tiết. Danh sách sắp giảm dần theo số tiết
select *from DMMONHOC
where tenmh like'T%'
order by sotiet desc
--6) Liệt kê danh sách sinh viên có chữ cái cuối cùng trong Tên là I, gồm các thông tin sau: Mã sinh viên, Họ tên sinh viên, Ngày sinh, Nơi sinh. Sắp giảm dần theo ngày sinh
select masv,hosv,tensv,ngaysinh,noisinh from DMSINHVIEN
where tensv like '%i'
order by ngaysinh desc
--7) Danh sách các khoa có ký tự thứ 2 của Tên khoa là chữ N
select *from DMKHOA
where tenkhoa like'_n%'
--8) Liệt kê những sinh viên mà Họ đệm có chứa chữ Thị
select hosv,tensv from DMSINHVIEN
where hosv like '%Thị%'
--9) Danh sách những sinh viên có ký tự đầu tiên của Tên nằm trong khoảng từ A đến D, gồm: Mã sinh viên, Họ tên sinh viên, Giới tính, Ngày sinh, Học bổng. Sắp xếp giảm dần theo tên
select masv,hosv,tensv,phai as gioitinh,ngaysinh,hocbong from DMSINHVIEN
where tensv like 'A%' or tensv like 'B%'or tensv like 'C%' or tensv like 'D%'
order by tensv desc
--10) Danh sách sinh viên khoa Sinh, gồm các thông tin: Mã sinh viên, Họ tên sinh viên, Ngày sinh, Tên khoa. Danh sách được sắp xếp theo Mã sinh viên tăng dần, Ngày sinh giảm dần
select masv,hosv,tensv,ngaysinh,tenkhoa from DMSINHVIEN join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
where tenkhoa='Sinh'
order by masv asc,ngaysinh desc
--11) Danh sách sinh viên nam có học bổng lớn hơn 200000 gồm các thông tin: Mã SV, Họ tên SV, Mã khoa, Học bổng. Danh sách được sắp xếp theo mã khoa giảm dần
select masv,hosv,tensv,makhoa,hocbong from DMSINHVIEN
where hocbong>200000 and phai='Nam'
--12) Cho biết những sinh viên có ngày sinh từ tháng 3 đến tháng 8, gồm: Mã sinh viên, Họ tên sinh viên, Giới tính, Ngày sinh, Học bổng
select masv,hosv,tensv,phai,ngaysinh,hocbong from DMSINHVIEN
where MONTH(ngaysinh)  between 3 and 8
--13) Liệt kê các sinh viên khoa Tin có học bổng nhỏ hơn 200000, gồm: Họ tên sinh viên, Ngày sinh, Học bổng, Mã khoa, Tên khoa
select hosv,tensv,ngaysinh,hocbong,DMKHOA.makh,tenkhoa from DMSINHVIEN join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
where tenkhoa='Tin' and hocbong<200000
--14) Danh sách sinh viên khoa Tin và Sinh, gồm: Họ tên sinh viên, Ngày sinh, Học bổng, Mã khoa, Tên khoa
select hosv,tensv,ngaysinh,hocbong,DMKHOA.makh,tenkhoa from DMSINHVIEN join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
where tenkhoa='Tin' or tenkhoa='Sinh'
--15) Danh sách sinh viên có học bổng từ 150,000 đến 250,000, gồm: Mã sinh viên, Họ tên sinh viên, Ngày sinh, Học bổng, Mã khoa. Danh sách được sắp xếp tăng dần theo mã khoa
select masv,hosv,tensv,ngaysinh,hocbong,makhoa from DMSINHVIEN
where hocbong between 150000 and 250000
--16) Cho biết những môn học có số tiết lớn hơn 45
select * from DMMONHOC
where sotiet>45
--17) Liệt kê danh sách Nam khoa Tin, gồm: Mã sinh viên, Họ tên sinh viên, Phái, Tên khoa
select masv,hosv,tensv,phai,tenkhoa from DMSINHVIEN join DMKHOA on dmkhoa.makh=dmsinhvien.makhoa
where phai='Nam' and tenkhoa='Tin'
--18) Danh sách sinh viên có điểm thi môn cơ sở dữ liệu là 4, 6 hoặc 8
select *from DMSINHVIEN join KETQUA on KETQUA.masv=DMSINHVIEN.masv
where mamh='D05' and diem in(4,6,8)
--19) Cho biết tên môn nào chưa có sinh viên học
select tenmh from DMMONHOC
where mamh not in(select mamh from KETQUA)
--20) Danh sách sinh viên chưa tham gia học môn có mã ‘M06’
select tensv from DMSINHVIEN
where masv not in(select masv from KETQUA where mamh='M06')
--21) Danh sách sinh viên tham gia từ 3 môn học trở lên
select tensv from DMSINHVIEN 
where masv in(select masv from KETQUA group by mamh,masv having count(mamh)>=3)
--22) Cho biết danh sách sinh viên của mỗi khoa và tổng số sinh viên của mỗi khoa
select tensv from DMSINHVIEN inner join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
select tenkhoa,count(masv) Tongsosinhvienkhoa from DMSINHVIEN inner join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
group by makh,tenkhoa
--23) Tính điểm trung bình cho từng học sinh
select hosv,tensv,avg(diem) DTB from KETQUA
inner join DMMONHOC on KETQUA.mamh=DMMONHOC.mamh
inner join DMSINHVIEN on DMSINHVIEN.masv=KETQUA.masv
group by hosv,tensv,DMSINHVIEN.masv
--24) Cho biết kết quả học tập của sinh viên, gồm: Mã sinh viên, Họ tên, Tên môn học, Điểmtrung binh, Loại. Trong đó, Loại sẽ là Giỏi nếu điểm TB > 8, nếu 6.5<=điểm TB<=8 là Khá, 5<=điểm TB<=6.5 là trung bình, ngược lại là Yếu
select DMSINHVIEN.masv,hosv,tensv,tenmh,sum(diem*(sotiet/15))/sum(sotiet/15) DTB,
CASE 
	WHEN AVG(DIEM)>8 THEN 'GIOI'
	WHEN AVG(DIEM)>=6.5 THEN 'KHA'
	WHEN AVG(DIEM)>=5 THEN 'TRUNG BINH'
	ELSE 'YEU'
END AS LOAI
from DMSINHVIEN inner join KETQUA on KETQUA.masv=DMSINHVIEN.masv inner join DMMONHOC on DMMONHOC.mamh=KETQUA.mamh
group by DMSINHVIEN.masv,hosv,tensv,tenmh
--25) Kết quả học tập của sinh viên đạt điểm khá (6.5<=điểm<=8) môn Cơ sở dữ liệu, gồm: Họ tên sinh viên, Tên môn, Điểm
select hosv,tensv,tenmh,diem from DMSINHVIEN,KETQUA,DMMONHOC
where DMSINHVIEN.masv=KETQUA.masv and KETQUA.mamh=DMMONHOC.mamh and tenmh=N'Cơ sở dữ liệu' and(diem>=6.5 and diem<=8)
--26) Cho biết thông tin về 2 sinh viên đầu tiên trong danh sách của khoa Tin
select top 2 masv,hosv,tensv from DMSINHVIEN inner join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
where tenkhoa='Tin'
--27) Danh sách sinh viên tham gia các môn học 60 tiết
select DMSINHVIEN.masv,hosv,tensv from DMSINHVIEN inner join KETQUA on KETQUA.masv=DMSINHVIEN.masv
where mamh in(select mamh from DMMONHOC where sotiet=60)
--28) Danh sách sinh viên có cùng ngày sinh với sinh viên có mã ‘A01’
select masv,hosv,tensv from DMSINHVIEN
where masv!='A01' and ngaysinh in(select ngaysinh from DMSINHVIEN where masv='A01') 
--29) Cho biết tổng số sinh viên ở mỗi khoa, gồm: Mã khoa, Tên khoa, Tổng số sinh viên.
select makh,tenkhoa,count(masv) TongsoSV from DMKHOA,DMSINHVIEN
where DMSINHVIEN.makhoa=DMKHOA.makh
group by makh,tenkhoa
--30) Cho biết điểm cao nhất của mỗi sinh viên, gồm: Họ tên sinh viên, điểm cao nhất.
select hosv,tensv,max(diem) diemmax from KETQUA inner join DMSINHVIEN on DMSINHVIEN.masv=KETQUA.masv
where diem in(select diem from KETQUA)
group by hosv,tensv
--31) Cho biết tuổi lớn nhất, tuổi nhỏ nhất, tuổi trung bình của các sinh viên khoa Triết.
select max(year(getdate())-year(ngaysinh)) TuoiMax,min(year(getdate())-year(ngaysinh)) TuoiMin,avg(cast(year(getdate())-year(ngaysinh) as float)) TuoiTB
from DMSINHVIEN,DMKHOA where DMSINHVIEN.makhoa=DMKHOA.makh and tenkhoa=N'Triết'
--32) Cho biết học bổng cao nhất của từng khoa, gồm: Mã khoa, Tên khoa, Học bổng cao nhất
select makh,tenkhoa,max(hocbong) HBCaoNhat from DMKHOA inner join DMSINHVIEN on DMSINHVIEN.makhoa=DMKHOA.makh
where hocbong in(select hocbong from DMSINHVIEN)
group by makh,tenkhoa
--33) Cho biết Điểm thấp nhất và cao nhất của mỗi môn gồm: Tên môn, Điểm thấp nhất, Điểm cao nhất
select tenmh,min(diem) DiemThapNhat,max(diem) DiemCaoNhat from DMMONHOC inner join KETQUA on KETQUA.mamh=DMMONHOC.mamh
where diem in(select diem from KETQUA)
group by tenmh
--34) Cho biết khoa nào có đông sinh viên nhất gồm: Mã khoa, Tên khoa, tổng số sinh viên
select top 1 makh,tenkhoa,count(masv) TongSoSV from DMSINHVIEN inner join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
where  masv in(select masv from DMSINHVIEN)
group by makh,tenkhoa
--35) Cho biết sinh viên nào có điểm môn “Cơ sở dữ liệu” lớn nhất, gồm: Họ tên sinh viên, Tên môn, Điểm
select hosv,tensv,tenmh,diem from KETQUA
join DMMONHOC on DMMONHOC.mamh=KETQUA.mamh
join DMSINHVIEN on DMSINHVIEN.masv=KETQUA.masv
where diem in(select max(diem) from KETQUA,DMMONHOC where DMMONHOC.mamh=KETQUA.mamh and tenmh = N'Cơ sở dữ liệu')
--36) Cho biết khoa nào có nhiều sinh viên nữ nhất, gồm: mã khoa, tên khoa.
select top 1 makh,tenkhoa from DMSINHVIEN join DMKHOA on DMSINHVIEN.makhoa=DMKHOA.makh 
where phai=N'Nữ'
group by makh,tenkhoa
--37) Tạo bảng KQKHOATIN lưu trữ thông tin về danh sách điểm thi của các sinh viên khoa Tin
select hosv,tensv,diem into KQKHOATIN from KETQUA join DMSINHVIEN on DMSINHVIEN.masv=KETQUA.masv join DMKHOA on DMKHOA.makh=DMSINHVIEN.makhoa
where tenkhoa=N'Tin'
--Hiển thị bảng dữ liệu
select *from DMKHOA
select *from DMSINHVIEN
select *from DMMONHOC
select *from KETQUA