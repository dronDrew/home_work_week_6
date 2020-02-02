#pragma once
template<typename T1,typename T2>
class base {
protected:
	T1 value_1;
	T2 value_2;
public:
	base();//done
	base(T1 data_1);//done
	base(T2 data_2);//done
	base(T1 data_1, T2 data_2);//done
	void Set_value_1(T1 data_1);//done
	void Set_value_2(T2 data_2);//done

};
template<typename T1, typename T2,typename T3, typename T4>
class child :public  base <T1,T2>{
protected:
	T3 value_3;
	T4 value_4;
public:
	child();//done
	child(T1 data_1);//done
	child(T2 data_2);//done
	child(T1 data_1, T2 data_2);//done
	child(T3 data_3);//done
	child(T4 data_4);//done
	child(T3 data_3, T4 data_4);//done
	child(T1 data_1, T2 data_2,T3 data_3, T4 data_4);//done
	void Set_value_3(T3 data_3);//done
	void Set_value_4(T4 data_4);//done

};
template<typename T1, typename T2, typename T3, typename T4,typename T5,typename T6>
class child_2 :public virtual child<T1,T2,T3,T4> {
	T5 value_3;
	T6 value_4;
public:
	child_2();
	child_2(T1 data_1);
	child_2(T2 data_2);
	child_2(T1 data_1, T2 data_2);
	child_2(T3 data_3);
	child_2(T4 data_4);
	child_2(T3 data_3, T4 data_4);
	child_2(T5 data_5);
	child_2(T6 data_6);
	child_2(T5 data_5, T4 data_6);
	child_2(T1 data_1, T2 data_2, T3 data_3, T4 data_4);
	child_2(T1 data_1, T2 data_2, T3 data_3, T4 data_4,T5 data_5);
	child_2(T1 data_1, T2 data_2, T3 data_3, T4 data_4,T5 data_5,T6 data_6);
	void Set_value_5(T5 data_5);
	void Set_value_6(T6 data_6);
};
template<typename T1, typename T2>
base<T1,T2>::base() {
	this->value_1 = 0;
	this->value_2 = 0;
}
template<typename T1, typename T2>
base<T1, T2>::base(T1 data_1):base() {
	this->value_1 = data_1;
}
template<typename T1, typename T2>
base<T1, T2>::base(T2 data_2) : base() {
	this->value_2 = data_2;
}
template<typename T1, typename T2>
base<T1, T2>::base(T1 data_1, T2 data_2) {
	this->value_1 = data_1;
	this->value_2 = data_2;
}
template<typename T1, typename T2>
void base<T1, T2>::Set_value_1(T1 data_1) {
	this->value_1 = data_1;
}
template<typename T1, typename T2>
void base<T1, T2>::Set_value_2(T2 data_2) {
	this->value_2 = data_2;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child():base<T1,T2>() {
	this->value_3 = 0;
	this->value_4 = 0;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T1 data_1):base<T1,T2>(data_1){
	this->value_3 = 0;
	this->value_4 = 0;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T2 data_2): base<T1, T2>(data_2) {
	this->value_3 = 0;
	this->value_4 = 0;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T1 data_1, T2 data_2):base<T1, T2>(data_1,data_2) {
	this->value_3 = 0;
	this->value_4 = 0;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T3 data_3): base<T1, T2>() {
	this->value_3 = data_3;
	this->value_4 = 0;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T4 data_4) : base<T1, T2>() {
	this->value_3 = 0;
	this->value_4 = data_4;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T3 data_3, T4 data_4) : base<T1, T2>() {
	this->value_3 = data_3;
	this->value_4 = data_4;
}
template<typename T1, typename T2, typename T3, typename T4>
child<T1, T2, T3, T4>::child(T1 data_1, T2 data_2, T3 data_3, T4 data_4):base<T1,T2>(data_1,data_2){
	this->value_3 = data_3;
	this->value_4 = data_4;
}
template<typename T1, typename T2, typename T3, typename T4>
void child<T1, T2, T3, T4>::Set_value_3(T3 data_3) {
	this->value_3 = data_3;
}
template<typename T1, typename T2, typename T3, typename T4>
void child<T1, T2, T3, T4>::Set_value_4(T4 data_4) {
	this->value_4 = data_4;
}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1,T2,T3,T4,T5,T6>::child_2():child<T1,T2,T3,T4>() {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T1 data_1) : child<T1, T2, T3, T4>(data_1) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T2 data_2) : child<T1, T2, T3, T4>(data_2) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T1 data_1, T2 data_2) : child<T1, T2, T3, T4>(data_1,data_2) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T3 data_3) : child<T1, T2, T3, T4>(data_3) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T4 data_4) : child<T1, T2, T3, T4>(data_4) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T3 data_3, T4 data_4):child<T1, T2, T3, T4>(data_3,data_4) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T5 data_5):child_2() {
	this->Set_value_5(data_5);
}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T6 data_6) : child_2() {
	this->Set_value_6(data_6);
}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T5 data_5, T4 data_6):child_2(data_5),child_2(data_6) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T1 data_1, T2 data_2, T3 data_3, T4 data_4): child<T1, T2, T3, T4>(data_1,data_2,data_3,data_4) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T1 data_1, T2 data_2, T3 data_3, T4 data_4,T5 data_5) : child<T1, T2, T3, T4>(data_1, data_2, data_3, data_4) {
	this->Set_value_5(data_5);
}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
child_2<T1, T2, T3, T4, T5, T6>::child_2(T1 data_1, T2 data_2, T3 data_3, T4 data_4, T5 data_5,T6 data_6) : child<T1, T2, T3, T4>(data_1, data_2, data_3, data_4){
	this->Set_value_5(data_5);
	this->Set_value_6(data_6);
}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void child_2<T1, T2, T3, T4, T5, T6>::Set_value_5(T5 data_5) {}
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void child_2<T1, T2, T3, T4, T5, T6>::Set_value_6(T6 data_6) {}