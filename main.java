class Result {

    public static long getMinCost(List<Integer> crew_id, List<Integer> job_id) {

        long cost=0;

        Collections.sort(crew_id);

        Collections.sort(job_id);

        int len1=crew_id.size();

        int len2=job_id.size();

        if(len1==len2)

        {

            for(int i=0;i<len1;i++)

            {

                if(job_id.get(i)>=crew_id.get(i))

                {

                    cost=cost+(job_id.get(i)-crew_id.get(i));

                }

                else if(job_id.get(i)<crew_id.get(i))

                {

                    cost=cost+(crew_id.get(i)-job_id.get(i));

                }

            }

        }

        return cost;

    } 

}