function recursiveFibonacci(n) {
	if (n <= 1) {
		return n;
	}
	else {
		return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
	}
}

function iterativeFibonacci(n){ 
	let x = 0, y = 1, z = 1;
	for (let i = 0; i < n; i++) {
		x = y;
		y = z;
		z = x + y;

		return x;
	}
}
