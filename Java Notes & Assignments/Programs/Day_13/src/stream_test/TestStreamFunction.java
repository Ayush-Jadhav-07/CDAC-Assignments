package stream_test;

import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;

public class TestStreamFunction {
	public static void main(String[] args) {
		
		List<Integer> lst=List.of(23,17,45,67,34,11,34);
	
		Optional<Integer> maxnum=lst.stream().max(Integer::compare);
		System.out.println(maxnum.get());
		
		Optional<Integer> minnum=lst.stream().min(Integer::compare);
		System.out.println(minnum.get());
		
		maxnum=lst.stream().filter(e->e%2!=0).max(Integer::compare);
		System.out.println(maxnum.get());
		
		Optional<Integer> op=lst.stream().filter(e->e>5).findFirst();
		if(op.isPresent()) {
			System.out.println(op.get());
		}
		
		List<Integer> lst1=lst.stream().map(e->e*e).collect(Collectors.toList());
		System.out.println(lst1);
		
		List<String> lstr=List.of("Hello","Welcome","Test","Check");
		
		Optional<String> op1=lstr.stream().reduce((acc,s)->acc.length()>s.length()?acc:s);
		System.out.println(op1.get());
		
		boolean status=lst.stream().allMatch(e->{
//			System.out.println("in all match "+e);
			return e>15;});
		System.out.println(status);
		
		status=lst.stream().noneMatch(e->{
//			System.out.println("in None match "+e);
			return e>15;});
		System.out.println(status);

		status=lst.stream().anyMatch(e->{
//			System.out.println("in any match "+e);
			return e>15;});
		System.out.println(status);
	}
	
}
