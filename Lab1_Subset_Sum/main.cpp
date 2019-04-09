int main(int argc, const char * argv[])
{
	srand((unsigned)time(0L)); // Comment out while debugging
	const size_t NUM_ENTRIES = 10;

	vector<int> master;

	size_t master_total = 0;
	for (size_t i = 0; i < NUM_ENTRIES; i++) 
	{
		int val = rand() % 300;
		master_total += val;
		master.push_back(val);
	}

	// Select an arbitrary target.
	size_t target = master_total / 2;

	Set<int> master_set(&master);
	Set<int> best_subset = master_set.find_biggest_subset_le(target);

	cout << "Target = " << target << endl;
	cout << "Best sum = " << best_subset.get_sum() << endl;
	cout << best_subset << endl;

	return 0;
}
