#pragma once

namespace WordGame {

	using namespace System;


	public ref class player
	{
	private:
			System::String^ name;
			System::Int32^ age;
			System::String^ vacation;
			System::String^ gender;

	public:

		player(System::String^ n, System::Int32^ a, System::String^ v, System::String^ g) {
			this->name = n;
			this->age = a;
			this->vacation = v;
			this->gender = g;
		}
		
		System::String^ getName() {
			return this->name;
		}

		void setName(System::String^ n) {
			this->name = n;
		}
		
		System::Int32^ getAge() {
			return this->age;
		}

		void setAge(System::String^ a) {
			this->age = System::Convert::ToInt32(a);
		}

		System::String^ getVacation() {
			return this->vacation;
		}

		void setVacation(System::String^ v) {
			this->vacation = v;
		}

		System::String^ getGender() {
			return this->gender;
		}

		void setGender(System::String^ g) {
			this->gender = g;
		}
		
	};

};