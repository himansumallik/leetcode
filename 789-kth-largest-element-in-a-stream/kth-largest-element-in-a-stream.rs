use std::collections::BinaryHeap;


struct KthLargest {
    k: i32,
    heap: BinaryHeap<i32>,
}

impl KthLargest {
    fn new(k: i32, nums: Vec<i32>) -> Self {
        KthLargest {
            k,
            heap: BinaryHeap::from_iter(nums.iter().map(|&n| -n)),
        }
    }

    fn add(&mut self, val: i32) -> i32 {
        self.heap.push(-val);
        while self.heap.len() > self.k as usize {
            self.heap.pop();
        }
        -self.heap.peek().unwrap()
    }
}