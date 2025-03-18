//Question 1- Ceil the Floor
//link-https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int>p1;
	int low=0;
	int high=n-1;
	while(low<=high)
  {
	int mid= low+(high-low)/2;
	if(a[mid]==x)
	{
		// our target is floor and ceil value only
		p1.first=p1.second=x;
		return p1;

	}
	else if(a[mid]>x)
	{
		high--;

	}
	else{
		low++;
	}
	//high>low
	

  }
  p1.first=a[high];
  p1.second=a[low];
  return p1;
	
}
