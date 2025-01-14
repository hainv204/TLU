1. Giới thiệu về Blade
Blade là hệ thống template trong Laravel giúp tách biệt logic và giao diện.
Ưu điểm:
Cú pháp dễ hiểu, rõ ràng.
Kế thừa layout và tạo component giúp tái sử dụng giao diện.
Hiệu suất cao nhờ cơ chế biên dịch thành mã PHP thuần.
2. Cú pháp và chỉ thị của Blade
Hiển thị dữ liệu: Sử dụng cú pháp {{ $variable }} để hiển thị nội dung của biến.
Chạy mã PHP: Sử dụng chỉ thị @php ... @endphp để chạy mã PHP trong Blade.
Cấu trúc điều khiển:
Sử dụng @if, @elseif, @else để điều khiển luồng dữ liệu.
Vòng lặp @foreach để lặp qua các phần tử.
Sử dụng @switch và @case để tạo cấu trúc điều kiện phân nhánh.
3. Tạo bố cục và kế thừa
Tạo layout: Sử dụng file layouts/app.blade.php để định nghĩa bố cục chung.
Kế thừa layout: Sử dụng @extends để kế thừa layout trong các view khác.
<!-- phpcode
@extends('layouts.app')

@section('title', 'Trang chủ')

@section('content')
<p>Đây là nội dung chính.</p>
@endsection -->
4. Tạo và sử dụng component
Tạo component bằng lệnh Artisan: php artisan make:component Alert.
Sử dụng component trong view với cú pháp <x-alert type="error" message="Đây là lỗi!" />.
5. Truyền dữ liệu cho view
Từ Controller:
Sử dụng phương thức with: return view('view-name')->with('variableName', $value);
Sử dụng compact: return view('view-name', compact('variable1', 'variable2'));
Sử dụng View Composers: Truyền dữ liệu qua callback hoặc class methods khi một view được render.
Dữ liệu chia sẻ: Sử dụng View::share để chia sẻ dữ liệu cho tất cả views.
Các bước chi tiết trên sẽ giúp bạn cấu trúc và thiết kế giao diện quản lý backend một cách hiệu quả hơn khi sử dụng Blade trong Laravel.